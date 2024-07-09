#include "UserInfoDialog.h"
#include "ui_UserInfoDialog.h"
#include "AddressDialog.h"

#include<QStringList>
#include<QTableWidgetItem>
#include<QFileDialog>
#include<QStandardPaths>

UserInfoDialog::UserInfoDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::UserInfoDialog)
{
    ui->setupUi(this);
    initUi();
}

UserInfoDialog::~UserInfoDialog()
{
    delete ui;
}

void UserInfoDialog::initUi()
{
    ui->tableWidget->setColumnCount(5);
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    //初始化用户信息
    qDebug() << "获取用户信息开始";
    UserInfoManager* p = UserInfoManager::getInstance();
    qDebug() << "获取用户名 : " << p->getUserName();
    ui->user_name_lineEdit->setText(p->getUserName());
    qDebug() << "获取头像 ： " << p->getPortrait();
    ui->portrait_label->setPixmap(QPixmap(p->getPortrait()).scaled(ui->portrait_label->size()));
    AddressInfo ads = p->getAddressInfo();
    for (int i = 0; i < ads.size(); ++i) {
        this->addAddressInfo(ads[i]);
    }
}

void UserInfoDialog::addAddressInfo(const AddressInfo::Info &ads)
{
    //UserInfoManager::getInstance()->getAddressInfo().addAddress(dialog->getAddress());
    //不能在这里添加地址，否则每次重新打开这个对话框，地址信息都会翻倍
    qDebug()<<"已经插入一条数据,现在共有: "<<UserInfoManager::getInstance()->getAddressInfo().size();
    QStringList s1;
    s1<<ads.receiverName+" "<<ads.province+" "<<ads.city+ " "<<ads.area<<ads.detailAddress + " "<<ads.phoneNumber;
    int rowCount = ui->tableWidget->rowCount();
    //qDebug()<<"当前有 ： "<<rowCount<<" 行";
    ui->tableWidget->insertRow(rowCount);

    int col = 0;
    for (int i = 0; i < s1.size(); ++i) {
        QTableWidgetItem* item = new QTableWidgetItem(s1[i]);
        ui->tableWidget->setItem(rowCount,col++,item);
    }
    QPushButton* btn = new QPushButton("删除",this);
    ui->tableWidget->setCellWidget(rowCount,ui->tableWidget->columnCount()-1,btn);

    connect(btn,&QPushButton::clicked,[=]{
        //qDebug()<<"删除第 ： "<<rowCount<<"行";
        UserInfoManager::getInstance()->getAddressInfo().remove(rowCount);
        UserInfoManager::getInstance()->saveUserInfo();
        ui->tableWidget->removeRow(rowCount);
    });

}

void UserInfoDialog::on_alter_portrait_pushButton_clicked()
{
    QString path = QFileDialog::getOpenFileName(this,"选择头像",
                                                QStandardPaths::standardLocations(QStandardPaths::PicturesLocation).first(),"Image (*.jpg *.png *.svg)");
    if(path.isEmpty())return;
    QPixmap pix = QPixmap(path).scaled(ui->portrait_label->size());
    ui->portrait_label->setPixmap(pix);
    UserInfoManager::getInstance()->setPortrait(path);

}


void UserInfoDialog::on_add_address_pushButton_clicked()
{
    auto dialog = new AddressDialog(this);
    dialog->setAttribute(Qt::WA_DeleteOnClose);
    connect(dialog,&AddressDialog::accepted,this,[=]{
        this->addAddressInfo(dialog->getAddress());
        UserInfoManager::getInstance()->getAddressInfo().addAddress(dialog->getAddress());
    });
    dialog->exec();
}


void UserInfoDialog::on_user_name_lineEdit_textChanged(const QString &arg1)
{
    UserInfoManager::getInstance()->setUserName(arg1);
}

