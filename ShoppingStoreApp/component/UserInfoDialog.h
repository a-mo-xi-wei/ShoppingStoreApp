#ifndef USERINFODIALOG_H
#define USERINFODIALOG_H

#include <QDialog>
#include "UserInfoManager.h"
namespace Ui {
class UserInfoDialog;
}

class UserInfoDialog : public QDialog
{
    Q_OBJECT

public:
    explicit UserInfoDialog(QWidget *parent = nullptr);
    ~UserInfoDialog();
    void initUi();
private slots:
    void on_alter_portrait_pushButton_clicked();

    void on_add_address_pushButton_clicked();

    void on_user_name_lineEdit_textChanged(const QString &arg1);

private:
    void addAddressInfo(const AddressInfo::Info& ads);

private:
    Ui::UserInfoDialog *ui;
};

#endif // USERINFODIALOG_H
