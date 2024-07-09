#include "ShopCartDialog.h"
#include "ui_ShopCartDialog.h"

#include"ShopCartItem.h"

#include<QVBoxLayout>

ShopCartDialog::ShopCartDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::ShopCartDialog)
{
    ui->setupUi(this);
    initUi();
}

ShopCartDialog::~ShopCartDialog()
{
    delete ui;
}

void ShopCartDialog::initUi()
{
    ui->product_widget->setLayout(new QVBoxLayout);
    ui->scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
    ui->scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    load();
    updateSumMoney(0);
}

void ShopCartDialog::removeItem(const QString &number)
{
    UserInfoManager::getInstance()->removeCartProduct(number);
}

void ShopCartDialog::updateSumMoney(const double &ap)
{
    this->m_sumMoney += ap;
    if(this->m_sumMoney < 0)this->m_sumMoney = 0;
    ui->total__price_label->setText(QString::number(this->m_sumMoney));
}

void ShopCartDialog::load()
{
    UserInfoManager* p =UserInfoManager::getInstance();
    auto shopCart = p->getCartProduct();
    for (int i = 0; i < shopCart.size(); ++i) {
        auto item = new ShopCartItem(shopCart.at(i),this);
        ui->product_widget->layout()->addWidget(item);
        connect(item,&ShopCartItem::removeItem,this,&ShopCartDialog::removeItem);
        connect(item,&ShopCartItem::sumMoneyChanged,this,&ShopCartDialog::updateSumMoney);
        connect(ui->checkBox,&QCheckBox::stateChanged,item,&ShopCartItem::setCheckBoxState);

    }
}
