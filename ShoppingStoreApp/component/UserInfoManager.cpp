#include "UserInfoManager.h"

#include<QJsonArray>
#include<QJsonObject>
#include<QSettings>
#include<QDir>
UserInfoManager* UserInfoManager::instance = new UserInfoManager();

UserInfoManager *UserInfoManager::getInstance()
{
    return instance;
}

void UserInfoManager::deleteManager()
{
    delete instance;
}

void UserInfoManager::loadUserInfo()
{
    QString iniPath = QDir::currentPath();
    QSettings settings(iniPath + "/user_info.ini",QSettings::IniFormat);

    this->m_accountNumber = settings.value("userAccount").toString();
    this->m_userName = settings.value("userName").toString();
    this->m_portrait = settings.value("portrait").toString();
    this->m_addressInfo = AddressInfo::fromJson(settings.value("address").toJsonDocument());
}

void UserInfoManager::saveUserInfo()//保存到配置文件
{
    QString iniPath = QDir::currentPath();
    QSettings settings(iniPath + "/user_info.ini",QSettings::IniFormat);

    settings.setValue("userAccount",this->m_accountNumber);
    settings.setValue("userName", this->m_userName);
    settings.setValue("portrait",this->m_portrait);
    settings.setValue("address",this->m_addressInfo.toJson());

}

void AddressInfo::addAddress(Info ads)
{
    this->addressInfo.append(ads);
}

void AddressInfo:: remove(int index)
{
    this->addressInfo.removeAt(index);//等价于remove
}

int AddressInfo::size()
{
    return this->addressInfo.size();
}

QJsonDocument AddressInfo::toJson()
{
    QJsonArray arr;
    for (auto& ads : this->addressInfo){
        QJsonObject obj;
        obj.insert("receiverName",ads.receiverName);
        obj.insert("phone_number",ads.phoneNumber);

        QJsonObject adsObj;
        adsObj.insert("province",ads.province);
        adsObj.insert("city",ads.city);
        adsObj.insert("area",ads.area);
        adsObj.insert("detail_address",ads.detailAddress);

        obj.insert("address",adsObj);
        obj.insert("default",ads.isDefault);

        arr.append(obj);
    }
    QJsonDocument doc ;
    doc.setArray(arr);
    return doc;
}

AddressInfo::Info &AddressInfo::operator[](int index)
{
    return this->addressInfo[index];
}

AddressInfo AddressInfo::fromJson(QJsonDocument adsDoc)
{
    AddressInfo info ;
    QJsonArray arr = adsDoc.array();
    for(int i = 0 ; i < arr.size() ; ++i){
        QJsonObject adsObj = arr.at(i).toObject();
        AddressInfo::Info ads;
        ads.receiverName = adsObj.value("receiver").toString();
        ads.phoneNumber = adsObj.value("phone_number").toString();
        QJsonObject adsObj2 = adsObj.value("address").toObject();
        ads.province = adsObj2.value("province").toString();
        ads.city = adsObj2.value("city").toString();
        ads.area = adsObj2.value("area").toString();
        ads.detailAddress = adsObj2.value("detail_address").toString();
        ads.isDefault = adsObj.value("default").toBool();
        info.addAddress(ads);
    }
    return info;
}

QString UserInfoManager::getUserName()
{
    return this->m_userName;
}

QString UserInfoManager::getAccountNumber()
{
    return this->m_accountNumber;
}

QString UserInfoManager::getPortrait()
{
    return this->m_portrait;
}

void UserInfoManager::setUserName(const QString &name)
{
    this->m_userName = name;
}

void UserInfoManager::setAccountNumber(const QString& number)
{
    this->m_accountNumber = number;
}

void UserInfoManager::setPortrait(const QString &path)
{
    this->m_portrait = path;
}

void UserInfoManager::addCollectProduct(const ProductInfo &proInfo)
{
    this->m_collectProduct.append(proInfo);
}

void UserInfoManager::removeCollectProduct(const QString &number)
{
    for (int i = 0; i < this->m_collectProduct.size(); ++i) {
        if(this->m_collectProduct[i].number == number){
            this->m_collectProduct.removeAt(i);
        }
    }
}

int UserInfoManager::getCollectProductSize()
{
    return this->m_collectProduct.size();
}

QList<ProductInfo>& UserInfoManager::getColllectProduct()
{
    return this->m_collectProduct;
}

void UserInfoManager::addCartProduct(const ProductCartInfo &info)
{
    this->m_cartProduct.append(info);
}

void UserInfoManager::removeCartProduct(const QString &number)
{
    for (int i = 0; i < this->m_cartProduct.size(); ++i) {
        if(this->m_cartProduct[i].productNumber == number){
            this->m_cartProduct.removeAt(i);
        }
    }
}

int UserInfoManager::getCartProductSize()
{
    return this->m_cartProduct.size();
}

QList<ProductCartInfo>& UserInfoManager::getCartProduct()
{
    return this->m_cartProduct;
}

void UserInfoManager::addOrderInfo(const OrderInfo &info)
{
    this->m_orders.append(info);
}

void UserInfoManager::removeOrder(const QString &number)
{
    for (int i = 0; i < this->m_orders.size(); ++i) {
        if(this->m_orders[i].number == number){
            this->m_orders.removeAt(i);
        }
    }
}

int UserInfoManager::getOrderSize()
{
    return this->m_orders.size();
}

QList<OrderInfo> &UserInfoManager::getOrders()
{
    return this->m_orders;
}

AddressInfo& UserInfoManager::getAddressInfo()
{
    return this->m_addressInfo;
}
