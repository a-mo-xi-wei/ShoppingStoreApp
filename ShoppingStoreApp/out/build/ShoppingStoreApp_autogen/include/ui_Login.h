/********************************************************************************
** Form generated from reading UI file 'Login.ui'
**
** Created by: Qt User Interface Compiler version 6.5.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QHBoxLayout *horizontalLayout_4;
    QStackedWidget *stackedWidget;
    QWidget *main_page;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QToolButton *portrait_toolButton;
    QSpacerItem *horizontalSpacer_2;
    QLabel *user_name_label;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *login_pushButton;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *register_pushButton;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_3;
    QToolButton *collect_toolButton;
    QToolButton *shopping_cart_toolButton;
    QToolButton *order_toolButton;
    QToolButton *address_toolButton;
    QWidget *login_page;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *login_account_lineEdit;
    QLabel *label_2;
    QLineEdit *login_password_lineEdit;
    QLabel *login_tip_label;
    QPushButton *login_login_pushButton;
    QPushButton *login_mainPage_pushButton;
    QWidget *register_page;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_6;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer_4;
    QFormLayout *formLayout_2;
    QLabel *label_3;
    QLineEdit *register_account_lineEdit;
    QLabel *label_4;
    QLineEdit *register_password_lineEdit;
    QLabel *label_5;
    QLineEdit *register_ensure_password_lineEdit;
    QLabel *register_tip_label;
    QPushButton *register_register_pushButton;
    QPushButton *register_mainPage_pushButton;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *horizontalSpacer_7;

    void setupUi(QWidget *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName("Login");
        Login->setEnabled(true);
        Login->resize(307, 248);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Login->sizePolicy().hasHeightForWidth());
        Login->setSizePolicy(sizePolicy);
        Login->setMinimumSize(QSize(307, 248));
        Login->setMaximumSize(QSize(307, 248));
        horizontalLayout_4 = new QHBoxLayout(Login);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        stackedWidget = new QStackedWidget(Login);
        stackedWidget->setObjectName("stackedWidget");
        main_page = new QWidget();
        main_page->setObjectName("main_page");
        verticalLayout = new QVBoxLayout(main_page);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        portrait_toolButton = new QToolButton(main_page);
        portrait_toolButton->setObjectName("portrait_toolButton");
        sizePolicy.setHeightForWidth(portrait_toolButton->sizePolicy().hasHeightForWidth());
        portrait_toolButton->setSizePolicy(sizePolicy);
        portrait_toolButton->setMinimumSize(QSize(150, 150));
        portrait_toolButton->setMaximumSize(QSize(150, 150));
        QFont font;
        font.setPointSize(9);
        portrait_toolButton->setFont(font);
        portrait_toolButton->setCursor(QCursor(Qt::PointingHandCursor));
        portrait_toolButton->setIconSize(QSize(150, 150));
        portrait_toolButton->setAutoExclusive(false);

        horizontalLayout->addWidget(portrait_toolButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        user_name_label = new QLabel(main_page);
        user_name_label->setObjectName("user_name_label");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("\345\215\216\346\226\207\350\241\214\346\245\267")});
        font1.setPointSize(18);
        user_name_label->setFont(font1);
        user_name_label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(user_name_label);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        login_pushButton = new QPushButton(main_page);
        login_pushButton->setObjectName("login_pushButton");
        sizePolicy.setHeightForWidth(login_pushButton->sizePolicy().hasHeightForWidth());
        login_pushButton->setSizePolicy(sizePolicy);
        login_pushButton->setMinimumSize(QSize(80, 50));
        login_pushButton->setMaximumSize(QSize(80, 50));

        horizontalLayout_2->addWidget(login_pushButton);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);

        register_pushButton = new QPushButton(main_page);
        register_pushButton->setObjectName("register_pushButton");
        sizePolicy.setHeightForWidth(register_pushButton->sizePolicy().hasHeightForWidth());
        register_pushButton->setSizePolicy(sizePolicy);
        register_pushButton->setMinimumSize(QSize(80, 50));
        register_pushButton->setMaximumSize(QSize(80, 50));

        horizontalLayout_2->addWidget(register_pushButton);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        collect_toolButton = new QToolButton(main_page);
        collect_toolButton->setObjectName("collect_toolButton");
        collect_toolButton->setMinimumSize(QSize(65, 60));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/collect.svg"), QSize(), QIcon::Normal, QIcon::Off);
        collect_toolButton->setIcon(icon);
        collect_toolButton->setIconSize(QSize(32, 32));
        collect_toolButton->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        horizontalLayout_3->addWidget(collect_toolButton);

        shopping_cart_toolButton = new QToolButton(main_page);
        shopping_cart_toolButton->setObjectName("shopping_cart_toolButton");
        shopping_cart_toolButton->setMinimumSize(QSize(65, 60));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/shopping-trolley.svg"), QSize(), QIcon::Normal, QIcon::Off);
        shopping_cart_toolButton->setIcon(icon1);
        shopping_cart_toolButton->setIconSize(QSize(32, 32));
        shopping_cart_toolButton->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        horizontalLayout_3->addWidget(shopping_cart_toolButton);

        order_toolButton = new QToolButton(main_page);
        order_toolButton->setObjectName("order_toolButton");
        order_toolButton->setMinimumSize(QSize(65, 60));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/order.svg"), QSize(), QIcon::Normal, QIcon::Off);
        order_toolButton->setIcon(icon2);
        order_toolButton->setIconSize(QSize(32, 32));
        order_toolButton->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        horizontalLayout_3->addWidget(order_toolButton);

        address_toolButton = new QToolButton(main_page);
        address_toolButton->setObjectName("address_toolButton");
        address_toolButton->setMinimumSize(QSize(65, 60));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/addressBook.svg"), QSize(), QIcon::Normal, QIcon::Off);
        address_toolButton->setIcon(icon3);
        address_toolButton->setIconSize(QSize(32, 32));
        address_toolButton->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        horizontalLayout_3->addWidget(address_toolButton);


        verticalLayout->addLayout(horizontalLayout_3);

        stackedWidget->addWidget(main_page);
        login_page = new QWidget();
        login_page->setObjectName("login_page");
        layoutWidget = new QWidget(login_page);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(40, 54, 241, 178));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        formLayout = new QFormLayout();
        formLayout->setSpacing(6);
        formLayout->setObjectName("formLayout");
        label = new QLabel(layoutWidget);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        login_account_lineEdit = new QLineEdit(layoutWidget);
        login_account_lineEdit->setObjectName("login_account_lineEdit");
        login_account_lineEdit->setMinimumSize(QSize(200, 28));

        formLayout->setWidget(0, QFormLayout::FieldRole, login_account_lineEdit);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        login_password_lineEdit = new QLineEdit(layoutWidget);
        login_password_lineEdit->setObjectName("login_password_lineEdit");
        login_password_lineEdit->setMinimumSize(QSize(0, 28));
        login_password_lineEdit->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(1, QFormLayout::FieldRole, login_password_lineEdit);


        verticalLayout_2->addLayout(formLayout);

        login_tip_label = new QLabel(layoutWidget);
        login_tip_label->setObjectName("login_tip_label");
        QPalette palette;
        QBrush brush(QColor(255, 5, 9, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        login_tip_label->setPalette(palette);
        login_tip_label->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(login_tip_label);

        login_login_pushButton = new QPushButton(layoutWidget);
        login_login_pushButton->setObjectName("login_login_pushButton");
        login_login_pushButton->setMinimumSize(QSize(0, 35));

        verticalLayout_2->addWidget(login_login_pushButton);

        login_mainPage_pushButton = new QPushButton(layoutWidget);
        login_mainPage_pushButton->setObjectName("login_mainPage_pushButton");
        login_mainPage_pushButton->setMinimumSize(QSize(0, 35));

        verticalLayout_2->addWidget(login_mainPage_pushButton);

        stackedWidget->addWidget(login_page);
        register_page = new QWidget();
        register_page->setObjectName("register_page");
        horizontalLayout_8 = new QHBoxLayout(register_page);
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalSpacer_6 = new QSpacerItem(92, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_6);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_4);

        formLayout_2 = new QFormLayout();
        formLayout_2->setSpacing(6);
        formLayout_2->setObjectName("formLayout_2");
        formLayout_2->setLabelAlignment(Qt::AlignCenter);
        label_3 = new QLabel(register_page);
        label_3->setObjectName("label_3");

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_3);

        register_account_lineEdit = new QLineEdit(register_page);
        register_account_lineEdit->setObjectName("register_account_lineEdit");
        register_account_lineEdit->setMinimumSize(QSize(200, 28));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, register_account_lineEdit);

        label_4 = new QLabel(register_page);
        label_4->setObjectName("label_4");

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_4);

        register_password_lineEdit = new QLineEdit(register_page);
        register_password_lineEdit->setObjectName("register_password_lineEdit");
        register_password_lineEdit->setMinimumSize(QSize(0, 28));
        register_password_lineEdit->setEchoMode(QLineEdit::Password);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, register_password_lineEdit);

        label_5 = new QLabel(register_page);
        label_5->setObjectName("label_5");

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_5);

        register_ensure_password_lineEdit = new QLineEdit(register_page);
        register_ensure_password_lineEdit->setObjectName("register_ensure_password_lineEdit");
        register_ensure_password_lineEdit->setMinimumSize(QSize(0, 28));
        register_ensure_password_lineEdit->setEchoMode(QLineEdit::Password);

        formLayout_2->setWidget(2, QFormLayout::FieldRole, register_ensure_password_lineEdit);


        verticalLayout_3->addLayout(formLayout_2);

        register_tip_label = new QLabel(register_page);
        register_tip_label->setObjectName("register_tip_label");
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        register_tip_label->setPalette(palette1);
        register_tip_label->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(register_tip_label);

        register_register_pushButton = new QPushButton(register_page);
        register_register_pushButton->setObjectName("register_register_pushButton");
        register_register_pushButton->setMinimumSize(QSize(0, 35));

        verticalLayout_3->addWidget(register_register_pushButton);

        register_mainPage_pushButton = new QPushButton(register_page);
        register_mainPage_pushButton->setObjectName("register_mainPage_pushButton");
        register_mainPage_pushButton->setMinimumSize(QSize(0, 35));

        verticalLayout_3->addWidget(register_mainPage_pushButton);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_3);


        horizontalLayout_8->addLayout(verticalLayout_3);

        horizontalSpacer_7 = new QSpacerItem(91, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_7);

        stackedWidget->addWidget(register_page);

        horizontalLayout_4->addWidget(stackedWidget);


        retranslateUi(Login);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QWidget *Login)
    {
        Login->setWindowTitle(QCoreApplication::translate("Login", "Login", nullptr));
        portrait_toolButton->setText(QString());
        user_name_label->setText(QCoreApplication::translate("Login", "\346\230\265\347\247\260", nullptr));
        login_pushButton->setText(QCoreApplication::translate("Login", "\347\231\273\345\275\225", nullptr));
        register_pushButton->setText(QCoreApplication::translate("Login", "\346\263\250\345\206\214", nullptr));
        collect_toolButton->setText(QCoreApplication::translate("Login", "\346\224\266\350\227\217", nullptr));
        shopping_cart_toolButton->setText(QCoreApplication::translate("Login", "\350\264\255\347\211\251\350\275\246", nullptr));
        order_toolButton->setText(QCoreApplication::translate("Login", "\350\256\242\345\215\225", nullptr));
        address_toolButton->setText(QCoreApplication::translate("Login", "\345\234\260\345\235\200\347\256\241\347\220\206", nullptr));
        label->setText(QCoreApplication::translate("Login", "\350\264\246\345\217\267", nullptr));
        login_account_lineEdit->setPlaceholderText(QCoreApplication::translate("Login", "8~12\344\275\215\346\225\260\345\255\227\345\271\266\344\270\224\345\274\200\345\244\264\344\270\215\344\270\2720", nullptr));
        label_2->setText(QCoreApplication::translate("Login", "\345\257\206\347\240\201", nullptr));
        login_password_lineEdit->setPlaceholderText(QCoreApplication::translate("Login", "8~15\344\275\215\345\271\266\344\270\224\345\277\205\351\241\273\345\214\205\345\220\253\345\255\227\346\257\215\345\222\214\346\225\260\345\255\227", nullptr));
        login_tip_label->setText(QString());
        login_login_pushButton->setText(QCoreApplication::translate("Login", "\347\231\273\345\275\225", nullptr));
        login_mainPage_pushButton->setText(QCoreApplication::translate("Login", "\344\270\273\351\241\265", nullptr));
        label_3->setText(QCoreApplication::translate("Login", "\350\264\246\345\217\267", nullptr));
        register_account_lineEdit->setPlaceholderText(QCoreApplication::translate("Login", "8~12\344\275\215\346\225\260\345\255\227\345\271\266\344\270\224\345\274\200\345\244\264\344\270\215\344\270\2720", nullptr));
        label_4->setText(QCoreApplication::translate("Login", "\345\257\206\347\240\201", nullptr));
        register_password_lineEdit->setPlaceholderText(QCoreApplication::translate("Login", "8~15\344\275\215\345\271\266\344\270\224\345\277\205\351\241\273\345\214\205\345\220\253\345\255\227\346\257\215\345\222\214\346\225\260\345\255\227", nullptr));
        label_5->setText(QCoreApplication::translate("Login", "\347\241\256\350\256\244\345\257\206\347\240\201", nullptr));
        register_tip_label->setText(QString());
        register_register_pushButton->setText(QCoreApplication::translate("Login", "\346\263\250\345\206\214", nullptr));
        register_mainPage_pushButton->setText(QCoreApplication::translate("Login", "\344\270\273\351\241\265", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
