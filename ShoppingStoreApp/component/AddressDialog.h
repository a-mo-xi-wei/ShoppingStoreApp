#ifndef ADDRESSDIALOG_H
#define ADDRESSDIALOG_H

#include <QDialog>
#include <QJsonObject>
#include"UserInfoManager.h"

namespace Ui {
class AddressDialog;
}

class AddressDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AddressDialog(QWidget *parent = nullptr);
    ~AddressDialog();

public:
    AddressInfo::Info getAddress();

private slots:
    void on_province_comboBox_currentIndexChanged(int index);

    void on_city_comboBox_currentIndexChanged(int index);

private:
    Ui::AddressDialog *ui;
    QJsonObject m_provinceObj;
    QJsonObject m_cityObj;
    QJsonObject m_areaObj;
};

#endif // ADDRESSDIALOG_H
