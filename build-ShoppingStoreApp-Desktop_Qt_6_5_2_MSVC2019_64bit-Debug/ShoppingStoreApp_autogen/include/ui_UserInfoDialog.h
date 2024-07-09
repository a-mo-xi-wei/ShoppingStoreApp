/********************************************************************************
** Form generated from reading UI file 'UserInfoDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.5.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERINFODIALOG_H
#define UI_USERINFODIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_UserInfoDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_6;
    QLabel *portrait_label;
    QSpacerItem *horizontalSpacer_7;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *alter_portrait_pushButton;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_2;
    QLineEdit *user_name_lineEdit;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *add_address_pushButton;
    QSpacerItem *horizontalSpacer;
    QTableWidget *tableWidget;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *UserInfoDialog)
    {
        if (UserInfoDialog->objectName().isEmpty())
            UserInfoDialog->setObjectName("UserInfoDialog");
        UserInfoDialog->resize(649, 575);
        verticalLayout = new QVBoxLayout(UserInfoDialog);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_6);

        portrait_label = new QLabel(UserInfoDialog);
        portrait_label->setObjectName("portrait_label");
        portrait_label->setMinimumSize(QSize(250, 250));
        portrait_label->setMaximumSize(QSize(250, 250));
        portrait_label->setScaledContents(true);

        horizontalLayout_4->addWidget(portrait_label);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_7);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        alter_portrait_pushButton = new QPushButton(UserInfoDialog);
        alter_portrait_pushButton->setObjectName("alter_portrait_pushButton");

        horizontalLayout_3->addWidget(alter_portrait_pushButton);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        label_2 = new QLabel(UserInfoDialog);
        label_2->setObjectName("label_2");

        horizontalLayout->addWidget(label_2);

        user_name_lineEdit = new QLineEdit(UserInfoDialog);
        user_name_lineEdit->setObjectName("user_name_lineEdit");

        horizontalLayout->addWidget(user_name_lineEdit);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        add_address_pushButton = new QPushButton(UserInfoDialog);
        add_address_pushButton->setObjectName("add_address_pushButton");

        horizontalLayout_2->addWidget(add_address_pushButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_2);

        tableWidget = new QTableWidget(UserInfoDialog);
        if (tableWidget->columnCount() < 5)
            tableWidget->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        tableWidget->setObjectName("tableWidget");

        verticalLayout->addWidget(tableWidget);

        buttonBox = new QDialogButtonBox(UserInfoDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(UserInfoDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, UserInfoDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, UserInfoDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(UserInfoDialog);
    } // setupUi

    void retranslateUi(QDialog *UserInfoDialog)
    {
        UserInfoDialog->setWindowTitle(QCoreApplication::translate("UserInfoDialog", "Dialog", nullptr));
        portrait_label->setText(QCoreApplication::translate("UserInfoDialog", "\345\244\264\345\203\217", nullptr));
        alter_portrait_pushButton->setText(QCoreApplication::translate("UserInfoDialog", "\344\277\256\346\224\271\345\244\264\345\203\217", nullptr));
        label_2->setText(QCoreApplication::translate("UserInfoDialog", "\346\230\265\347\247\260", nullptr));
        add_address_pushButton->setText(QCoreApplication::translate("UserInfoDialog", "\346\267\273\345\212\240\345\234\260\345\235\200", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("UserInfoDialog", "\346\224\266\344\273\266\344\272\272", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("UserInfoDialog", "\346\211\200\345\234\250\345\234\260\345\214\272", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("UserInfoDialog", "\350\257\246\347\273\206\345\234\260\345\235\200", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("UserInfoDialog", "\347\224\265\350\257\235", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("UserInfoDialog", "\346\223\215\344\275\234", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UserInfoDialog: public Ui_UserInfoDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERINFODIALOG_H
