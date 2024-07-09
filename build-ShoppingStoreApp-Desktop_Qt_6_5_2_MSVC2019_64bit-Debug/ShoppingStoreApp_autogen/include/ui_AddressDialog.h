/********************************************************************************
** Form generated from reading UI file 'AddressDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.5.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDRESSDIALOG_H
#define UI_ADDRESSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddressDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QLineEdit *receiver_lineEdit;
    QSpacerItem *horizontalSpacer;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *phone_number_lineEdit;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_3;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_3;
    QComboBox *province_comboBox;
    QComboBox *city_comboBox;
    QComboBox *area_comboBox;
    QLabel *label_4;
    QTextEdit *detail_address_textEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AddressDialog)
    {
        if (AddressDialog->objectName().isEmpty())
            AddressDialog->setObjectName("AddressDialog");
        AddressDialog->resize(433, 348);
        verticalLayout = new QVBoxLayout(AddressDialog);
        verticalLayout->setObjectName("verticalLayout");
        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        formLayout->setLabelAlignment(Qt::AlignCenter);
        label = new QLabel(AddressDialog);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        receiver_lineEdit = new QLineEdit(AddressDialog);
        receiver_lineEdit->setObjectName("receiver_lineEdit");

        horizontalLayout->addWidget(receiver_lineEdit);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        formLayout->setLayout(0, QFormLayout::FieldRole, horizontalLayout);

        label_2 = new QLabel(AddressDialog);
        label_2->setObjectName("label_2");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        phone_number_lineEdit = new QLineEdit(AddressDialog);
        phone_number_lineEdit->setObjectName("phone_number_lineEdit");

        horizontalLayout_2->addWidget(phone_number_lineEdit);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        formLayout->setLayout(1, QFormLayout::FieldRole, horizontalLayout_2);

        label_3 = new QLabel(AddressDialog);
        label_3->setObjectName("label_3");

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        widget = new QWidget(AddressDialog);
        widget->setObjectName("widget");
        horizontalLayout_3 = new QHBoxLayout(widget);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, -1, -1, -1);
        province_comboBox = new QComboBox(widget);
        province_comboBox->setObjectName("province_comboBox");

        horizontalLayout_3->addWidget(province_comboBox);

        city_comboBox = new QComboBox(widget);
        city_comboBox->setObjectName("city_comboBox");

        horizontalLayout_3->addWidget(city_comboBox);

        area_comboBox = new QComboBox(widget);
        area_comboBox->setObjectName("area_comboBox");

        horizontalLayout_3->addWidget(area_comboBox);


        formLayout->setWidget(2, QFormLayout::FieldRole, widget);

        label_4 = new QLabel(AddressDialog);
        label_4->setObjectName("label_4");

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        detail_address_textEdit = new QTextEdit(AddressDialog);
        detail_address_textEdit->setObjectName("detail_address_textEdit");

        formLayout->setWidget(3, QFormLayout::FieldRole, detail_address_textEdit);


        verticalLayout->addLayout(formLayout);

        buttonBox = new QDialogButtonBox(AddressDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(AddressDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, AddressDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, AddressDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(AddressDialog);
    } // setupUi

    void retranslateUi(QDialog *AddressDialog)
    {
        AddressDialog->setWindowTitle(QCoreApplication::translate("AddressDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("AddressDialog", "\346\224\266\344\273\266\344\272\272\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("AddressDialog", "\346\211\213\346\234\272\345\217\267\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("AddressDialog", "\345\234\260\345\214\272\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("AddressDialog", "\350\257\246\347\273\206\345\234\260\345\235\200\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddressDialog: public Ui_AddressDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDRESSDIALOG_H
