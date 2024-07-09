#include "LowPriceArea.h"

#include<QTime>

#include<QJsonDocument>
#include<QJsonArray>
#include<QJsonObject>
#include<QJsonValue>

#include<QFile>
#include<QFileInfo>
#include<QVBoxLayout>
#include<QPainter>

LowPriceArea::LowPriceArea(QWidget *parent)
    : QWidget{parent}
{
    this->m_timeLimitArea = new LowPriceAreaItem(this);
    this->m_speciaslOffArea = new LowPriceAreaItem(this);

    this->m_timeLimitArea->setTag("限时秒杀",QPixmap("://icons/time-limit.svg"),QTime::fromString("23:00:00","hh:mm:ss"));
    this->m_speciaslOffArea->setTag("特价优惠",QPixmap("://icons/special-offer.svg"),QTime::fromString("23:00:00","hh:mm:ss"));

    loadTimeLimitArea();
    loadspecialOffArea();

    this->m_timeLimitArea->init();
    this->m_speciaslOffArea->init();

    initUI();

}

void LowPriceArea::loadTimeLimitArea()
{
    QFileInfo fileInfo(__FILE__);
    QString path = fileInfo.absolutePath();
    QFile file(path + "/../shopstore/timeLimitArea/timeLimit.json");
    if(!file.open(QIODevice::ReadOnly)){
        qWarning()<<"限时秒杀商品加载失败";
        return;
    }
    QJsonDocument jdoc = QJsonDocument::fromJson(file.readAll());
    QJsonObject jobj = jdoc.object();
    QJsonArray jarr = jobj["products"].toArray();
    for(auto i = 0; i < jarr.size() ; ++i){
        QJsonObject obj = jarr.at(i).toObject();
        QString pixPath = path + obj.value("picturePath").toString();
        qreal price = obj.value("price").toDouble();

        this->m_timeLimitArea->addProdut(pixPath,QString::number(price));
    }
    file.close();
}

void LowPriceArea::loadspecialOffArea()
{
    QFileInfo fileInfo(__FILE__);
    QString path = fileInfo.absolutePath();
    QFile file(path + "/../shopstore/specialOfferArea/specialOffer.json");
    if(!file.open(QIODevice::ReadOnly)){
        qWarning()<<"特价商品加载失败";
        return;
    }
    QJsonDocument jdoc = QJsonDocument::fromJson(file.readAll());
    QJsonObject jobj = jdoc.object();
    QJsonArray jarr = jobj["products"].toArray();
    for(auto i = 0; i < jarr.size() ; ++i){
        QJsonObject obj = jarr.at(i).toObject();
        QString pixPath = path + obj.value("picturePath").toString();
        qreal price = obj.value("price").toDouble();

        this->m_speciaslOffArea->addProdut(pixPath,QString::number(price));
    }
    file.close();
}

void LowPriceArea::initUI()
{
    auto layout = new QVBoxLayout(this);
    layout->addWidget(this->m_timeLimitArea);
    layout->addWidget(this->m_speciaslOffArea);
    layout->setSpacing(20);
    
}


