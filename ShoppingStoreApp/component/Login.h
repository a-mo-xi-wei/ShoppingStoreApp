#pragma once

#include <QWidget>
QT_BEGIN_NAMESPACE
namespace Ui { class Login; };
QT_END_NAMESPACE

class Login : public QWidget
{
	Q_OBJECT

public:
	Login(QWidget *parent = nullptr);
	~Login();
private slots:
	void on_login_pushButton_clicked();

    void on_register_pushButton_clicked();

    void on_register_mainPage_pushButton_clicked();

    void on_login_mainPage_pushButton_clicked();

    void on_login_login_pushButton_clicked();

    void on_register_register_pushButton_clicked();

    void on_portrait_toolButton_clicked();

    void on_address_toolButton_clicked();

    void on_collect_toolButton_clicked();

    void on_shopping_cart_toolButton_clicked();

    void on_order_toolButton_clicked();

private:
    bool checkAccount(const QString& account);
    bool checkPassword(const QString& password);
    void loadUserInfo();
private:
	Ui::Login *ui;
    //是否已经登录
    bool m_logged;
};
