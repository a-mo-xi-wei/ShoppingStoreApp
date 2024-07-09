/********************************************************************************
** Form generated from reading UI file 'ShopCartDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.5.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOPCARTDIALOG_H
#define UI_SHOPCARTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ShopCartDialog
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QCheckBox *checkBox;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_5;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_3;
    QWidget *product_widget;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_6;
    QLabel *label_6;
    QLabel *total__price_label;
    QPushButton *settle_pushButton;

    void setupUi(QDialog *ShopCartDialog)
    {
        if (ShopCartDialog->objectName().isEmpty())
            ShopCartDialog->setObjectName("ShopCartDialog");
        ShopCartDialog->resize(1050, 516);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ShopCartDialog->sizePolicy().hasHeightForWidth());
        ShopCartDialog->setSizePolicy(sizePolicy);
        ShopCartDialog->setMinimumSize(QSize(1050, 0));
        ShopCartDialog->setMaximumSize(QSize(1050, 16777215));
        verticalLayout = new QVBoxLayout(ShopCartDialog);
        verticalLayout->setObjectName("verticalLayout");
        widget = new QWidget(ShopCartDialog);
        widget->setObjectName("widget");
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        checkBox = new QCheckBox(widget);
        checkBox->setObjectName("checkBox");

        horizontalLayout->addWidget(checkBox);

        horizontalSpacer = new QSpacerItem(140, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label = new QLabel(widget);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        horizontalSpacer_2 = new QSpacerItem(140, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");

        horizontalLayout->addWidget(label_2);

        horizontalSpacer_3 = new QSpacerItem(70, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");

        horizontalLayout->addWidget(label_3);

        horizontalSpacer_5 = new QSpacerItem(70, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);

        label_4 = new QLabel(widget);
        label_4->setObjectName("label_4");

        horizontalLayout->addWidget(label_4);

        horizontalSpacer_4 = new QSpacerItem(50, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        label_5 = new QLabel(widget);
        label_5->setObjectName("label_5");

        horizontalLayout->addWidget(label_5);


        verticalLayout->addWidget(widget);

        scrollArea = new QScrollArea(ShopCartDialog);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 1026, 378));
        verticalLayout_3 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_3->setObjectName("verticalLayout_3");
        product_widget = new QWidget(scrollAreaWidgetContents);
        product_widget->setObjectName("product_widget");
        product_widget->setMinimumSize(QSize(1000, 0));
        product_widget->setMaximumSize(QSize(1000, 16777215));
        verticalLayout_2 = new QVBoxLayout(product_widget);
        verticalLayout_2->setObjectName("verticalLayout_2");

        verticalLayout_3->addWidget(product_widget);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_6);

        label_6 = new QLabel(ShopCartDialog);
        label_6->setObjectName("label_6");

        horizontalLayout_2->addWidget(label_6);

        total__price_label = new QLabel(ShopCartDialog);
        total__price_label->setObjectName("total__price_label");
        QPalette palette;
        QBrush brush(QColor(255, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        total__price_label->setPalette(palette);
        QFont font;
        font.setPointSize(15);
        total__price_label->setFont(font);

        horizontalLayout_2->addWidget(total__price_label);

        settle_pushButton = new QPushButton(ShopCartDialog);
        settle_pushButton->setObjectName("settle_pushButton");
        settle_pushButton->setMinimumSize(QSize(0, 50));

        horizontalLayout_2->addWidget(settle_pushButton);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(ShopCartDialog);

        QMetaObject::connectSlotsByName(ShopCartDialog);
    } // setupUi

    void retranslateUi(QDialog *ShopCartDialog)
    {
        ShopCartDialog->setWindowTitle(QCoreApplication::translate("ShopCartDialog", "Dialog", nullptr));
        checkBox->setText(QCoreApplication::translate("ShopCartDialog", "\345\205\250\351\200\211", nullptr));
        label->setText(QCoreApplication::translate("ShopCartDialog", "\345\225\206\345\223\201\344\277\241\346\201\257", nullptr));
        label_2->setText(QCoreApplication::translate("ShopCartDialog", "\345\215\225\344\273\267", nullptr));
        label_3->setText(QCoreApplication::translate("ShopCartDialog", "\346\225\260\351\207\217", nullptr));
        label_4->setText(QCoreApplication::translate("ShopCartDialog", "\351\207\221\351\242\235", nullptr));
        label_5->setText(QCoreApplication::translate("ShopCartDialog", "\346\223\215\344\275\234", nullptr));
        label_6->setText(QCoreApplication::translate("ShopCartDialog", "\345\220\210\350\256\241\357\274\210\344\270\215\345\220\253\350\277\220\350\264\271\357\274\211", nullptr));
        total__price_label->setText(QCoreApplication::translate("ShopCartDialog", "\346\200\273\344\273\267", nullptr));
        settle_pushButton->setText(QCoreApplication::translate("ShopCartDialog", "\347\273\223\347\256\227", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ShopCartDialog: public Ui_ShopCartDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOPCARTDIALOG_H
