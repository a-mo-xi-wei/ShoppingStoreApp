#ifndef USERINFOMANAGER_H
#define USERINFOMANAGER_H

#include<QString>
#include<QList>
#include<QPixmap>
#include<QJsonDocument>

#include "ProductViewDelegate.h"

class AddressInfo
{
public:
    struct Info
    {
        QString receiverName;
        QString phoneNumber;
        QString province;
        QString city;
        QString area;
        QString detailAddress;
        bool isDefault;

    public:
        QString toString(){
            return QString("%1 %2 %3 %4 (%5 收) %6").arg(province)
                .arg(city).arg(area).arg(detailAddress).arg(receiverName).arg(phoneNumber);
        }

    };
private:
    QList<Info> addressInfo;
public:
    void addAddress(Info ads);
    void remove(int index);
    int size();
    QJsonDocument toJson();
    Info& operator[] (int index);

    static AddressInfo fromJson(QJsonDocument adsDoc);

};

struct ProductCartInfo
{
    QString productNumber;
    QString title;
    int quantity;
    QString price;
    QPixmap coverPicture;

};

struct OrderInfo
{
    QString number;
    QString time;
    QString totalPrice;
    QString productNumber;
    QString productTitle;
    QPixmap coverPicture;
};

class UserInfoManager
{
private:
    static UserInfoManager* instance;
    QString m_accountNumber;
    QString m_userName;
    QString m_portrait;

    AddressInfo m_addressInfo;
    QList<ProductInfo>m_collectProduct;
    QList<ProductCartInfo>m_cartProduct;
    QList<OrderInfo>m_orders;

public:
    static UserInfoManager* getInstance();
    static void deleteManager();

    void loadUserInfo();
    void saveUserInfo();

    //用户相关
    QString getUserName();
    QString getAccountNumber();
    QString getPortrait();
    void setUserName(const QString& name);
    void setAccountNumber(const QString& number);
    void setPortrait(const QString& path);
    //收藏夹相关
    void addCollectProduct(const ProductInfo& proInfo);
    void removeCollectProduct(const QString& number);
    int getCollectProductSize();
    QList<ProductInfo>& getColllectProduct();
     //购物车相关
    void addCartProduct(const ProductCartInfo& info);
    void removeCartProduct(const QString& number);
    int getCartProductSize();
    QList<ProductCartInfo>& getCartProduct();
    //订单相关
    void addOrderInfo(const OrderInfo& info);
    void removeOrder(const QString& number);
    int getOrderSize();
    QList<OrderInfo>& getOrders();

    AddressInfo& getAddressInfo();

private:
    UserInfoManager(){};
    UserInfoManager(const UserInfoManager& )=delete;
    UserInfoManager& operator= (const UserInfoManager&) = delete;

};

#endif // USERINFOMANAGER_H
