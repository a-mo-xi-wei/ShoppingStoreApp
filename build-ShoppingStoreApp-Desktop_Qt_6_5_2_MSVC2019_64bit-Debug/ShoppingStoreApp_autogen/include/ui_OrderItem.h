/********************************************************************************
** Form generated from reading UI file 'OrderItem.ui'
**
** Created by: Qt User Interface Compiler version 6.5.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ORDERITEM_H
#define UI_ORDERITEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OrderItem
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *datetime_label;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLabel *number_label;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *remove_pushButton;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *pix_label;
    QSpacerItem *horizontalSpacer_4;
    QLabel *title_label;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_7;
    QLabel *label_9;
    QLabel *total_price_label;

    void setupUi(QWidget *OrderItem)
    {
        if (OrderItem->objectName().isEmpty())
            OrderItem->setObjectName("OrderItem");
        OrderItem->resize(845, 324);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(OrderItem->sizePolicy().hasHeightForWidth());
        OrderItem->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(OrderItem);
        verticalLayout->setObjectName("verticalLayout");
        widget = new QWidget(OrderItem);
        widget->setObjectName("widget");
        horizontalLayout_3 = new QHBoxLayout(widget);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(widget);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        datetime_label = new QLabel(widget);
        datetime_label->setObjectName("datetime_label");

        horizontalLayout->addWidget(datetime_label);


        horizontalLayout_3->addLayout(horizontalLayout);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");

        horizontalLayout_2->addWidget(label_3);

        number_label = new QLabel(widget);
        number_label->setObjectName("number_label");

        horizontalLayout_2->addWidget(number_label);


        horizontalLayout_3->addLayout(horizontalLayout_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        remove_pushButton = new QPushButton(widget);
        remove_pushButton->setObjectName("remove_pushButton");
        remove_pushButton->setMinimumSize(QSize(0, 30));
        remove_pushButton->setMaximumSize(QSize(16777215, 30));

        horizontalLayout_3->addWidget(remove_pushButton);


        verticalLayout->addWidget(widget);

        widget_2 = new QWidget(OrderItem);
        widget_2->setObjectName("widget_2");
        horizontalLayout_4 = new QHBoxLayout(widget_2);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        pix_label = new QLabel(widget_2);
        pix_label->setObjectName("pix_label");
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pix_label->sizePolicy().hasHeightForWidth());
        pix_label->setSizePolicy(sizePolicy1);
        pix_label->setMinimumSize(QSize(150, 150));
        pix_label->setMaximumSize(QSize(150, 150));
        pix_label->setScaledContents(true);

        horizontalLayout_4->addWidget(pix_label);

        horizontalSpacer_4 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        title_label = new QLabel(widget_2);
        title_label->setObjectName("title_label");

        horizontalLayout_4->addWidget(title_label);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);

        label_7 = new QLabel(widget_2);
        label_7->setObjectName("label_7");
        QPalette palette;
        QBrush brush(QColor(255, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        label_7->setPalette(palette);

        horizontalLayout_4->addWidget(label_7);

        label_9 = new QLabel(widget_2);
        label_9->setObjectName("label_9");
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        label_9->setPalette(palette1);

        horizontalLayout_4->addWidget(label_9);

        total_price_label = new QLabel(widget_2);
        total_price_label->setObjectName("total_price_label");
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        total_price_label->setPalette(palette2);
        QFont font;
        font.setPointSize(15);
        total_price_label->setFont(font);

        horizontalLayout_4->addWidget(total_price_label);


        verticalLayout->addWidget(widget_2);


        retranslateUi(OrderItem);

        QMetaObject::connectSlotsByName(OrderItem);
    } // setupUi

    void retranslateUi(QWidget *OrderItem)
    {
        OrderItem->setWindowTitle(QCoreApplication::translate("OrderItem", "Form", nullptr));
        label->setText(QCoreApplication::translate("OrderItem", "\346\227\266\351\227\264\357\274\232", nullptr));
        datetime_label->setText(QCoreApplication::translate("OrderItem", "\346\227\245\346\234\237\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("OrderItem", "\350\256\242\345\215\225\347\274\226\345\217\267\357\274\232", nullptr));
        number_label->setText(QCoreApplication::translate("OrderItem", "\347\274\226\345\217\267", nullptr));
        remove_pushButton->setText(QCoreApplication::translate("OrderItem", "\345\210\240\351\231\244", nullptr));
        pix_label->setText(QCoreApplication::translate("OrderItem", "\345\260\201\351\235\242", nullptr));
        title_label->setText(QCoreApplication::translate("OrderItem", "\346\240\207\351\242\230", nullptr));
        label_7->setText(QCoreApplication::translate("OrderItem", "\351\207\221\351\242\235\357\274\232", nullptr));
        label_9->setText(QCoreApplication::translate("OrderItem", "\357\277\245", nullptr));
        total_price_label->setText(QCoreApplication::translate("OrderItem", "\346\200\273\344\273\267", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OrderItem: public Ui_OrderItem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ORDERITEM_H
