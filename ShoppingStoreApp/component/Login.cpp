#include "Login.h"
#include "ui_Login.h"
#include"UserInfoManager.h"
#include"UserInfoDialog.h"
#include"CollectionDialog.h"
#include"ShopCartDialog.h"
#include"OrderDialog.h"

#include<QSqlDatabase>
#include<QSqlQuery>
#include<QSettings>
#include<QStandardPaths>
#include<QDir>
#include<QRegularExpression>
#include<QMessageBox>
Login::Login(QWidget *parent)
	: QWidget(parent)
	, ui(new Ui::Login)
    , m_logged(false)
{
	ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);
}

Login::~Login()
{
	delete ui;
}

void Login::on_login_pushButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);

}

void Login::on_register_pushButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void Login::on_login_mainPage_pushButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void Login::on_register_mainPage_pushButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);

}

void Login::on_login_login_pushButton_clicked()
{
    QString account = ui->login_account_lineEdit->text();
    QString passWord = ui->login_password_lineEdit->text();
    if(!checkAccount(account)||!checkPassword(passWord)){
        ui->login_tip_label->setText("账号或密码格式不正确,请重新输入");
        return;
    }
    QSqlDatabase db = QSqlDatabase::database("ssapp");
    QSqlQuery query(db);
    query.prepare("select account,password from user_account where account = ? and password = ?");
    query.bindValue(0,account);
    query.bindValue(1,passWord);
    if(!query.exec() || !query.next()){
        ui->login_tip_label->setText("账号或密码错误");
    }
    else{
        this->m_logged = true;
        loadUserInfo();

        ui->stackedWidget->setCurrentIndex(0);
        ui->login_pushButton->hide();
        ui->register_pushButton->hide();
    }
}

void Login::on_register_register_pushButton_clicked()
{
    QString account = ui->register_account_lineEdit->text();
    QString passWord = ui->register_password_lineEdit->text();
    QString passWord_ensure = ui->register_ensure_password_lineEdit->text();

    if(passWord != passWord_ensure){
        ui->register_tip_label->setText("两次输入的密码不一致");
        return;
    }
    else  if(!checkAccount(account)||!checkPassword(passWord)){
        ui->register_tip_label->setText("账号或密码格式不正确,请重新输入");
        return;
    }
    QSqlDatabase db = QSqlDatabase::database("ssapp");
    QSqlQuery query(db);
    query.prepare("select account from user_account where account = :account");
    query.bindValue(":account",account);
    if(!query.exec() || query.next()){
        ui->register_tip_label->setText("账号已经存在,注册失败");
    }else{
        query.prepare("insert into user_account (account,password) values (?,?)");
        query.bindValue(0,account);
        query.bindValue(1,passWord);
        if(!query.exec()){
            ui->register_tip_label->setText("注册失败，数据库错误，请稍后重试");
            return;
        }
        ui->register_tip_label->setText("注册成功");
        ui->register_account_lineEdit->clear();
        ui->register_password_lineEdit->clear();
        ui->register_ensure_password_lineEdit->clear();
    }

}

bool Login::checkAccount(const QString &account)
{
    //必须为 8-12 位数字，开头不能为0
    QRegularExpression reg("^[1-9][0-9]{7,11}$");
    if(reg.match(account).hasMatch()){
        return true;
    }
    return false;
}

bool Login::checkPassword(const QString &password)
{
    //必须要包含数字和字母，长度 8-15
    QRegularExpression reg(R"(^(?=.*\d)(?=.*[A-z])[\da-zA-Z]{8,15}$)");
    if(reg.match(password).hasMatch()){
        return true;
    }
    return false;
}

void Login::loadUserInfo()
{

    QString iniPath = QDir::currentPath();
    QSettings settings(iniPath + "/user_info.ini",QSettings::Format::IniFormat);

    if (ui->login_account_lineEdit->text() == settings.value("userAccount").toString()) {
        ui->user_name_label->setText("你好，" + settings.value("userName").toString());
        ui->portrait_toolButton->setIcon(QIcon(QPixmap(settings.value("portrait").toString()).scaled(ui->portrait_toolButton->size())));
    }
    else {
        settings.setValue("userAccount", ui->login_account_lineEdit->text());
        UserInfoManager::getInstance()->loadUserInfo();
    }
}

void Login::on_portrait_toolButton_clicked()
{
    if (!this->m_logged) {
        QMessageBox::warning(this, "警告", "请先登录");
        return;
    }
    UserInfoManager::getInstance()->loadUserInfo();
    auto dialog = new UserInfoDialog(this);
    dialog->setAttribute(Qt::WA_DeleteOnClose);
    QString iniPath = QDir::currentPath();
    QSettings settings(iniPath + "/user_info.ini", QSettings::Format::IniFormat);
    connect(dialog,&UserInfoDialog::accepted,this,[&]
        {
            UserInfoManager::getInstance()->saveUserInfo();
            ui->user_name_label->setText("你好，" + settings.value("userName").toString());
            ui->portrait_toolButton->setIcon(QIcon(QPixmap(settings.value("portrait").toString()).scaled(ui->portrait_toolButton->size())));
            
        });
    dialog->exec();
}

void Login::on_address_toolButton_clicked()
{
    if (!this->m_logged) {
        QMessageBox::warning(this, "警告", "请先登录");
        return;
    }       

    ui->portrait_toolButton->click();
}


void Login::on_collect_toolButton_clicked()
{
    if (!this->m_logged) {
        QMessageBox::warning(this, "警告", "请先登录");
        return;
    }
    auto dialog = new CollectionDialog(this);
    dialog->setAttribute(Qt::WA_DeleteOnClose);

    dialog->exec();
}


void Login::on_shopping_cart_toolButton_clicked()
{
    if (!this->m_logged) {
        QMessageBox::warning(this, "警告", "请先登录");
        return;
    }
    auto dialog = new ShopCartDialog(this);
    dialog->setAttribute(Qt::WA_DeleteOnClose);
    dialog->exec();
}


void Login::on_order_toolButton_clicked()
{
    if (!this->m_logged) {
        QMessageBox::warning(this, "警告", "请先登录");
        return;
    }
    auto dialog = new OrderDialog(this);
    dialog->setAttribute(Qt::WA_DeleteOnClose);
    dialog->exec();
}

