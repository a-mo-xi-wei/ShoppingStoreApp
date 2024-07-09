#include "ShopCartItem.h"
#include "ui_ShopCartItem.h"
ShopCartItem::ShopCartItem(const ProductCartInfo &info, QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ShopCartItem)
{
    ui->setupUi(this);
    initUi(info);
}

ShopCartItem::~ShopCartItem()
{
    delete ui;
}

void ShopCartItem::initUi(const ProductCartInfo &info)
{
    ui->pix_label->setPixmap(info.coverPicture);
    ui->title_label->setText(info.title);
    ui->price_label->setText(info.price);
    ui->sumMoney_label->setText(info.price);

    this->m_number = info.productNumber;
}

void ShopCartItem::setCheckBoxState(int state)
{
    ui->checkBox->setCheckState((Qt::CheckState)state);
}

void ShopCartItem::on_sub_pushButton_clicked()
{
    int quantity = ui->quantity_label->text().toInt();
    int oldSum = ui->price_label->text().toDouble() * quantity;
    quantity = quantity == 1 ? quantity : --quantity;
    ui->quantity_label->setText(QString::number(quantity));
    double sum = ui->price_label->text().toDouble() * quantity;
    ui->sumMoney_label->setText(QString::number(sum));
    if(ui->checkBox->checkState() == Qt::Checked){
        emit sumMoneyChanged(sum - oldSum);
    }
}


void ShopCartItem::on_add_pushButton_clicked()
{
    int quantity = ui->quantity_label->text().toInt();
    int oldSum = ui->price_label->text().toDouble() * quantity;
    ++quantity;
    ui->quantity_label->setText(QString::number(quantity));
    double sum = ui->price_label->text().toDouble() * quantity;
    ui->sumMoney_label->setText(QString::number(sum));
    if(ui->checkBox->checkState() == Qt::Checked){
        emit sumMoneyChanged(sum - oldSum);
    }
}

void ShopCartItem::on_remove_pushButton_clicked()
{
    this->hide();
    emit removeItem(this->m_number);
    emit sumMoneyChanged(ui->sumMoney_label->text().toDouble() * -1);
}

void ShopCartItem::on_checkBox_stateChanged(int arg1)
{
    if(ui->checkBox->checkState() == Qt::Checked){
        emit sumMoneyChanged(ui->sumMoney_label->text().toDouble());
    }else{
        emit sumMoneyChanged(ui->sumMoney_label->text().toDouble() * -1);
    }
}

