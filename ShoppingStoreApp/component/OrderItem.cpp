#include "OrderItem.h"
#include "ui_OrderItem.h"

OrderItem::OrderItem(OrderInfo info, QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::OrderItem)
{
    ui->setupUi(this);
    initUi(info);
}

OrderItem::~OrderItem()
{
    delete ui;
}

void OrderItem::initUi(const OrderInfo &info)
{
    ui->pix_label->setPixmap(info.coverPicture);
    ui->datetime_label->setText(info.time);
    ui->number_label->setText(info.number);
    ui->title_label->setText(info.productTitle);
    ui->total_price_label->setText(info.totalPrice);

    this->number = info.number;

}




void OrderItem::on_remove_pushButton_clicked()
{
    this->hide();
    emit itemRemove(this->number);
}

