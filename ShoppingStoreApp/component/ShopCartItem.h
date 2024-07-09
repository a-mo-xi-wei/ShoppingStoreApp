#ifndef SHOPCARTITEM_H
#define SHOPCARTITEM_H

#include <QWidget>
#include"UserInfoManager.h"
namespace Ui {
class ShopCartItem;
}

class ShopCartItem : public QWidget
{
    Q_OBJECT

public:
    explicit ShopCartItem(const ProductCartInfo& info,QWidget *parent = nullptr);
    ~ShopCartItem();
    void initUi(const ProductCartInfo &info);
signals:
    void removeItem(const QString& number);
    void sumMoneyChanged(const double& price);
public slots:
    void setCheckBoxState(int state);

    void on_sub_pushButton_clicked();

    void on_add_pushButton_clicked();

    void on_remove_pushButton_clicked();

    void on_checkBox_stateChanged(int arg1);

private:
    Ui::ShopCartItem *ui;
    QString m_number;
};

#endif // SHOPCARTITEM_H
