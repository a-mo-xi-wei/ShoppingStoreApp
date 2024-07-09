#include "AddressDialog.h"
#include "ui_AddressDialog.h"

#include<QJsonDocument>
#include<QJsonArray>
#include<QFile>

AddressDialog::AddressDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AddressDialog)
{
    ui->setupUi(this);

    QFile file(__FILE__ + QString("/../../shopstore/city.json"));
    if(!file.open(QIODevice::ReadOnly)){
        qWarning()<<"city.json 打开失败";
        return ;
    }
    qDebug()<<"city.json 打开成功";
    //此处用QByteArray存储，不能使用readAll,对于大文件，无法一次性读完
    QByteArray jsonData;
    while(!file.atEnd()){
        jsonData.append(file.read(1024));
    }
    QJsonDocument cityJson = QJsonDocument::fromJson(jsonData);
    //省份
    this->m_provinceObj = cityJson.object();
    QStringList provinces = this->m_provinceObj.keys();
    ui->province_comboBox->addItems(provinces);
    //市
    this->m_cityObj = this->m_provinceObj.value(provinces.first()).toObject();
    QStringList citys = this->m_cityObj.keys();
    ui->city_comboBox->addItems(citys);
    //区
    this->m_areaObj = this->m_cityObj.value(citys.first()).toObject();
    QStringList areas = this->m_areaObj.keys();
    ui->area_comboBox->addItems(areas);

    //设置默认值
    ui->province_comboBox->setCurrentIndex(0);
    ui->city_comboBox->setCurrentIndex(0);
    ui->area_comboBox->setCurrentIndex(0);
}

AddressDialog::~AddressDialog()
{
    delete ui;
}

AddressInfo::Info AddressDialog::getAddress()
{
    AddressInfo::Info info;

    info.receiverName = ui->receiver_lineEdit->text();
    info.phoneNumber = ui->phone_number_lineEdit->text();
    info.province = ui->province_comboBox->currentText();
    info.city = ui->city_comboBox->currentText();
    info.area = ui->area_comboBox->currentText();
    info.detailAddress = ui->detail_address_textEdit->toPlainText();

    return info;
}

void AddressDialog::on_province_comboBox_currentIndexChanged(int index)
{
    this->m_cityObj = this->m_provinceObj.value(ui->province_comboBox->currentText()).toObject();
    QStringList citys = this->m_cityObj.keys();
    ui->city_comboBox->clear();
    ui->city_comboBox->addItems(citys);

    this->m_areaObj = this->m_cityObj.value(ui->city_comboBox->currentText()).toObject();
    QStringList areas = this->m_areaObj.keys();
    ui->area_comboBox->clear();
    ui->area_comboBox->addItems(areas);
}


void AddressDialog::on_city_comboBox_currentIndexChanged(int index)
{
    this->m_areaObj = this->m_cityObj.value(ui->city_comboBox->currentText()).toObject();
    QStringList areas = this->m_areaObj.keys();
    ui->area_comboBox->clear();
    ui->area_comboBox->addItems(areas);
}

