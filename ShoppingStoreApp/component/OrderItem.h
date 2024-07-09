#ifndef ORDERITEM_H
#define ORDERITEM_H

#include <QWidget>
#include"UserInfoManager.h"

namespace Ui {
class OrderItem;
}

class OrderItem : public QWidget
{
    Q_OBJECT

public:
    explicit OrderItem(OrderInfo info,QWidget *parent = nullptr);
    ~OrderItem();
    void initUi(const OrderInfo& info);
signals:
    void itemRemove(const QString& number);


private slots:
    void on_remove_pushButton_clicked();

private:
    Ui::OrderItem *ui;
    QString number;
};

#endif // ORDERITEM_H
