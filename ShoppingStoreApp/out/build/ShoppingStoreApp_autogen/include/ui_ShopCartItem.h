/********************************************************************************
** Form generated from reading UI file 'ShopCartItem.ui'
**
** Created by: Qt User Interface Compiler version 6.5.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOPCARTITEM_H
#define UI_SHOPCARTITEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ShopCartItem
{
public:
    QHBoxLayout *horizontalLayout_5;
    QCheckBox *checkBox;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *pix_label;
    QVBoxLayout *verticalLayout;
    QLabel *title_label;
    QSpacerItem *verticalSpacer;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLabel *price_label;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *sub_pushButton;
    QLabel *quantity_label;
    QPushButton *add_pushButton;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_6;
    QLabel *sumMoney_label;
    QPushButton *remove_pushButton;

    void setupUi(QWidget *ShopCartItem)
    {
        if (ShopCartItem->objectName().isEmpty())
            ShopCartItem->setObjectName("ShopCartItem");
        ShopCartItem->resize(1059, 140);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ShopCartItem->sizePolicy().hasHeightForWidth());
        ShopCartItem->setSizePolicy(sizePolicy);
        ShopCartItem->setMinimumSize(QSize(0, 135));
        ShopCartItem->setMaximumSize(QSize(16777215, 140));
        horizontalLayout_5 = new QHBoxLayout(ShopCartItem);
        horizontalLayout_5->setSpacing(70);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        checkBox = new QCheckBox(ShopCartItem);
        checkBox->setObjectName("checkBox");
        checkBox->setMaximumSize(QSize(25, 16777215));

        horizontalLayout_5->addWidget(checkBox);

        widget = new QWidget(ShopCartItem);
        widget->setObjectName("widget");
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy1);
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        pix_label = new QLabel(widget);
        pix_label->setObjectName("pix_label");
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pix_label->sizePolicy().hasHeightForWidth());
        pix_label->setSizePolicy(sizePolicy2);
        pix_label->setMinimumSize(QSize(95, 95));
        pix_label->setMaximumSize(QSize(95, 95));
        pix_label->setScaledContents(true);

        horizontalLayout->addWidget(pix_label);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        title_label = new QLabel(widget);
        title_label->setObjectName("title_label");
        title_label->setMinimumSize(QSize(250, 0));
        title_label->setMaximumSize(QSize(250, 16777215));
        title_label->setWordWrap(true);

        verticalLayout->addWidget(title_label);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout);


        horizontalLayout_5->addWidget(widget);

        widget_2 = new QWidget(ShopCartItem);
        widget_2->setObjectName("widget_2");
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_3 = new QLabel(widget_2);
        label_3->setObjectName("label_3");
        QPalette palette;
        QBrush brush(QColor(255, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        label_3->setPalette(palette);
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label_3);

        price_label = new QLabel(widget_2);
        price_label->setObjectName("price_label");
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        price_label->setPalette(palette1);
        QFont font;
        font.setPointSize(15);
        price_label->setFont(font);

        horizontalLayout_2->addWidget(price_label);


        horizontalLayout_5->addWidget(widget_2);

        widget_3 = new QWidget(ShopCartItem);
        widget_3->setObjectName("widget_3");
        horizontalLayout_3 = new QHBoxLayout(widget_3);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        sub_pushButton = new QPushButton(widget_3);
        sub_pushButton->setObjectName("sub_pushButton");
        sub_pushButton->setMinimumSize(QSize(40, 35));
        sub_pushButton->setMaximumSize(QSize(40, 35));
        sub_pushButton->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_3->addWidget(sub_pushButton);

        quantity_label = new QLabel(widget_3);
        quantity_label->setObjectName("quantity_label");
        quantity_label->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(quantity_label);

        add_pushButton = new QPushButton(widget_3);
        add_pushButton->setObjectName("add_pushButton");
        add_pushButton->setMinimumSize(QSize(40, 35));
        add_pushButton->setMaximumSize(QSize(40, 30));
        add_pushButton->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_3->addWidget(add_pushButton);


        horizontalLayout_5->addWidget(widget_3);

        widget_4 = new QWidget(ShopCartItem);
        widget_4->setObjectName("widget_4");
        horizontalLayout_4 = new QHBoxLayout(widget_4);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_6 = new QLabel(widget_4);
        label_6->setObjectName("label_6");
        label_6->setMinimumSize(QSize(0, 30));
        label_6->setMaximumSize(QSize(80, 16777215));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        label_6->setPalette(palette2);
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(label_6);

        sumMoney_label = new QLabel(widget_4);
        sumMoney_label->setObjectName("sumMoney_label");
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        sumMoney_label->setPalette(palette3);
        sumMoney_label->setFont(font);

        horizontalLayout_4->addWidget(sumMoney_label);


        horizontalLayout_5->addWidget(widget_4);

        remove_pushButton = new QPushButton(ShopCartItem);
        remove_pushButton->setObjectName("remove_pushButton");

        horizontalLayout_5->addWidget(remove_pushButton);

        horizontalLayout_5->setStretch(1, 1);

        retranslateUi(ShopCartItem);

        QMetaObject::connectSlotsByName(ShopCartItem);
    } // setupUi

    void retranslateUi(QWidget *ShopCartItem)
    {
        ShopCartItem->setWindowTitle(QCoreApplication::translate("ShopCartItem", "Form", nullptr));
        checkBox->setText(QString());
        pix_label->setText(QCoreApplication::translate("ShopCartItem", "TextLabel", nullptr));
        title_label->setText(QCoreApplication::translate("ShopCartItem", "TextLabel", nullptr));
        label_3->setText(QCoreApplication::translate("ShopCartItem", "\357\277\245", nullptr));
        price_label->setText(QCoreApplication::translate("ShopCartItem", "\345\215\225\344\273\267", nullptr));
        sub_pushButton->setText(QCoreApplication::translate("ShopCartItem", "-", nullptr));
        quantity_label->setText(QCoreApplication::translate("ShopCartItem", "1", nullptr));
        add_pushButton->setText(QCoreApplication::translate("ShopCartItem", "+", nullptr));
        label_6->setText(QCoreApplication::translate("ShopCartItem", "\357\277\245", nullptr));
        sumMoney_label->setText(QCoreApplication::translate("ShopCartItem", "\346\200\273\344\273\267", nullptr));
        remove_pushButton->setText(QCoreApplication::translate("ShopCartItem", "\345\210\240\351\231\244", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ShopCartItem: public Ui_ShopCartItem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOPCARTITEM_H
