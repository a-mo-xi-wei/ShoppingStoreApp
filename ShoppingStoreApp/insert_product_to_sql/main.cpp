#include<QCoreApplication>
#include<QSqlDatabase>
#include<QSqlError>
#include<QSqlQuery>
#include<QJsonDocument>
#include<QJsonArray>
#include<QJsonObject>
#include<QFile>
#include<QFileInfo>
#include<QDir>
/*
int main(int argc,char* argv[]){
    QCoreApplication a(argc,argv);
    qDebug()<<__FILE__<<" ";
    QFile file(__FILE__ + QString("/../../shopstore/products/information.json"));
    if(!file.open(QIODevice::ReadOnly)){
        qDebug()<<"文件打开失败";
        return -1;
    }
    qDebug()<<"文件打开成功";
    return a.exec();
}*/

int main(int argc,char* argv[]){
    QCoreApplication a(argc,argv);
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL","insertToSql");
    db.setHostName("localhost");
    db.setPort(3306);
    db.setUserName("root");
    db.setPassword("123456789");
    db.setDatabaseName("shopstoredb");
    if(!db.open()){
        qDebug()<<"数据库库连接失败"<<db.lastError().text();
        return 0;
    }
    qDebug()<<"数据库连接成功";

    QFileInfo info(__FILE__);
    QString path = info.absolutePath() + "/../shopstore/products/information.json";
    QFile file(path);
    if(!file.open(QIODevice::ReadOnly)){
        qDebug()<<"information.json 打开失败";
        return -1;
    }
    qDebug()<<"information.json 打开成功";
    QJsonDocument doc = QJsonDocument::fromJson(file.readAll());
    QJsonObject rootObj = doc.object();

    QStringList keys = rootObj.keys();
    for(auto& val : keys){
        QFile infoFile(__FILE__ + QString("/..")+rootObj.value(val).toString());
        qDebug()<<infoFile.fileName();
        if(!infoFile.open(QIODevice::ReadOnly)){
            qCritical()<<" 打开失败";
            continue;
        }
        qDebug()<<"打开成功";
        QJsonDocument infoDoc = QJsonDocument::fromJson(infoFile.readAll());
        QJsonObject infoObj = infoDoc.object();
        int kind = infoObj.value("kind").toInt();
        QJsonArray productArray = infoObj.value("products").toArray();
        for(auto i = 0 ; i < productArray.size() ; ++i){
            QJsonObject productObj = productArray.at(i).toObject();

            QString number = productObj.value("number").toString();
            QString title = productObj.value("title").toString();

            QJsonDocument classificationDoc;
            classificationDoc.setArray(productObj.value("classification").toArray());

            QJsonDocument descriptionDoc;
            descriptionDoc.setObject(productObj.value("description").toObject());

            QJsonDocument imageDoc;
            imageDoc.setArray(productObj.value("image").toArray());

            QJsonDocument descriptionImageDoc;
            descriptionImageDoc.setArray(productObj.value("description_image").toArray());

            QSqlQuery query(db);
            query.prepare("insert into product (product_number,kind,title,description,classification,image,description_image) value(?,?,?,?,?,?,?)");
            query.bindValue(0,number);
            query.bindValue(1,kind);
            query.bindValue(2,title);
            query.bindValue(3,QString(descriptionDoc.toJson()));
            query.bindValue(4,QString(classificationDoc.toJson()));
            query.bindValue(5,QString(imageDoc.toJson()));
            query.bindValue(6,QString(descriptionImageDoc.toJson()));
            if(!query.exec()){
                qDebug()<<keys.at(i)<<" 插入失败"<<query.lastError().text();
                return -1;
            }

        }
        qDebug()<<val<<" 插入成功";
    }

    return a.exec();
}
