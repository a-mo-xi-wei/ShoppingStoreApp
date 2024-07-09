#include "OrderDialog.h"
#include"UserInfoManager.h"
#include"OrderItem.h"

#include<QScrollArea>
#include<QVBoxLayout>

OrderDialog::OrderDialog(QWidget *parent, Qt::WindowFlags f)
    :QDialog(parent,f)
{
    initUi();
}

void OrderDialog::initUi()
{
    this->setWindowTitle("订单");
    this->setFixedSize(730,500);
    QScrollArea* area = new QScrollArea(this);
    area->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
    area->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    QWidget* w = new QWidget(this);
    QVBoxLayout* vlayout = new  QVBoxLayout(this);
    vlayout->addWidget(area);

    //加载订单
    UserInfoManager* p = UserInfoManager::getInstance();
    auto orders = p->getOrders();

    QVBoxLayout* vlayout2 = new QVBoxLayout(w);

    for (int i = 0; i < orders.size(); ++i) {
        auto item = new OrderItem(orders.at(i),this);
        connect(item,&OrderItem::itemRemove,this,&OrderDialog::removeOrder);
        vlayout2->addWidget(item);
    }
    vlayout2->addSpacerItem(new QSpacerItem(20,40,QSizePolicy::Preferred,QSizePolicy::Expanding));
    area->setWidget(w);
}

void OrderDialog::removeOrder(const QString &number)
{
    UserInfoManager::getInstance()->removeOrder(number);
}
