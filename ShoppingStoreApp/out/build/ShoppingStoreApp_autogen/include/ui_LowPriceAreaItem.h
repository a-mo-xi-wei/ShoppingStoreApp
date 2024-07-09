/********************************************************************************
** Form generated from reading UI file 'LowPriceAreaItem.ui'
**
** Created by: Qt User Interface Compiler version 6.5.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOWPRICEAREAITEM_H
#define UI_LOWPRICEAREAITEM_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LowPriceAreaItem
{
public:
    QHBoxLayout *horizontalLayout_3;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *tag_title_label;
    QLabel *tag_icon_label;
    QLabel *tag_time_label;
    QHBoxLayout *horizontalLayout;
    QLabel *hh_label;
    QLabel *label_5;
    QLabel *mm_label;
    QLabel *label_8;
    QLabel *ss_label;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *left_pushButton;
    QVBoxLayout *verticalLayout_2;
    QLabel *product_pix1_label;
    QLabel *product_price1_label;
    QVBoxLayout *verticalLayout_3;
    QLabel *product_pix2_label;
    QLabel *product_price2_label;
    QVBoxLayout *verticalLayout_4;
    QLabel *product_pix3_label;
    QLabel *product_price3_label;
    QPushButton *right_pushButton;

    void setupUi(QWidget *LowPriceAreaItem)
    {
        if (LowPriceAreaItem->objectName().isEmpty())
            LowPriceAreaItem->setObjectName("LowPriceAreaItem");
        LowPriceAreaItem->resize(700, 160);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(LowPriceAreaItem->sizePolicy().hasHeightForWidth());
        LowPriceAreaItem->setSizePolicy(sizePolicy);
        LowPriceAreaItem->setMinimumSize(QSize(700, 160));
        LowPriceAreaItem->setMaximumSize(QSize(700, 160));
        horizontalLayout_3 = new QHBoxLayout(LowPriceAreaItem);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        widget = new QWidget(LowPriceAreaItem);
        widget->setObjectName("widget");
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        widget->setMinimumSize(QSize(90, 110));
        widget->setMaximumSize(QSize(90, 110));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        tag_title_label = new QLabel(widget);
        tag_title_label->setObjectName("tag_title_label");
        QFont font;
        font.setPointSize(15);
        font.setBold(true);
        tag_title_label->setFont(font);
        tag_title_label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(tag_title_label);

        tag_icon_label = new QLabel(widget);
        tag_icon_label->setObjectName("tag_icon_label");
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tag_icon_label->sizePolicy().hasHeightForWidth());
        tag_icon_label->setSizePolicy(sizePolicy1);
        tag_icon_label->setScaledContents(false);
        tag_icon_label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(tag_icon_label);

        tag_time_label = new QLabel(widget);
        tag_time_label->setObjectName("tag_time_label");
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        tag_time_label->setFont(font1);
        tag_time_label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(tag_time_label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(5);
        horizontalLayout->setObjectName("horizontalLayout");
        hh_label = new QLabel(widget);
        hh_label->setObjectName("hh_label");
        hh_label->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(hh_label);

        label_5 = new QLabel(widget);
        label_5->setObjectName("label_5");
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        label_5->setFont(font2);
        label_5->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_5);

        mm_label = new QLabel(widget);
        mm_label->setObjectName("mm_label");
        mm_label->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(mm_label);

        label_8 = new QLabel(widget);
        label_8->setObjectName("label_8");
        label_8->setFont(font2);
        label_8->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_8);

        ss_label = new QLabel(widget);
        ss_label->setObjectName("ss_label");
        ss_label->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(ss_label);


        verticalLayout->addLayout(horizontalLayout);


        horizontalLayout_3->addWidget(widget);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(10);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        left_pushButton = new QPushButton(LowPriceAreaItem);
        left_pushButton->setObjectName("left_pushButton");
        sizePolicy.setHeightForWidth(left_pushButton->sizePolicy().hasHeightForWidth());
        left_pushButton->setSizePolicy(sizePolicy);
        left_pushButton->setMinimumSize(QSize(20, 20));
        left_pushButton->setMaximumSize(QSize(20, 20));
        left_pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/back.svg"), QSize(), QIcon::Normal, QIcon::Off);
        left_pushButton->setIcon(icon);
        left_pushButton->setIconSize(QSize(20, 20));
        left_pushButton->setFlat(true);

        horizontalLayout_2->addWidget(left_pushButton);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(10);
        verticalLayout_2->setObjectName("verticalLayout_2");
        product_pix1_label = new QLabel(LowPriceAreaItem);
        product_pix1_label->setObjectName("product_pix1_label");
        sizePolicy.setHeightForWidth(product_pix1_label->sizePolicy().hasHeightForWidth());
        product_pix1_label->setSizePolicy(sizePolicy);
        product_pix1_label->setMinimumSize(QSize(100, 80));
        product_pix1_label->setMaximumSize(QSize(100, 80));
        product_pix1_label->setCursor(QCursor(Qt::PointingHandCursor));
        product_pix1_label->setScaledContents(true);
        product_pix1_label->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(product_pix1_label);

        product_price1_label = new QLabel(LowPriceAreaItem);
        product_price1_label->setObjectName("product_price1_label");
        sizePolicy.setHeightForWidth(product_price1_label->sizePolicy().hasHeightForWidth());
        product_price1_label->setSizePolicy(sizePolicy);
        product_price1_label->setMinimumSize(QSize(80, 13));
        product_price1_label->setMaximumSize(QSize(80, 13));
        QPalette palette;
        QBrush brush(QColor(255, 0, 4, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        product_price1_label->setPalette(palette);
        product_price1_label->setFont(font2);
        product_price1_label->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(product_price1_label);


        horizontalLayout_2->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(10);
        verticalLayout_3->setObjectName("verticalLayout_3");
        product_pix2_label = new QLabel(LowPriceAreaItem);
        product_pix2_label->setObjectName("product_pix2_label");
        sizePolicy.setHeightForWidth(product_pix2_label->sizePolicy().hasHeightForWidth());
        product_pix2_label->setSizePolicy(sizePolicy);
        product_pix2_label->setMinimumSize(QSize(100, 80));
        product_pix2_label->setMaximumSize(QSize(100, 80));
        product_pix2_label->setCursor(QCursor(Qt::PointingHandCursor));
        product_pix2_label->setScaledContents(true);
        product_pix2_label->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(product_pix2_label);

        product_price2_label = new QLabel(LowPriceAreaItem);
        product_price2_label->setObjectName("product_price2_label");
        sizePolicy.setHeightForWidth(product_price2_label->sizePolicy().hasHeightForWidth());
        product_price2_label->setSizePolicy(sizePolicy);
        product_price2_label->setMinimumSize(QSize(80, 13));
        product_price2_label->setMaximumSize(QSize(80, 13));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        product_price2_label->setPalette(palette1);
        product_price2_label->setFont(font2);
        product_price2_label->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(product_price2_label);


        horizontalLayout_2->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(10);
        verticalLayout_4->setObjectName("verticalLayout_4");
        product_pix3_label = new QLabel(LowPriceAreaItem);
        product_pix3_label->setObjectName("product_pix3_label");
        sizePolicy.setHeightForWidth(product_pix3_label->sizePolicy().hasHeightForWidth());
        product_pix3_label->setSizePolicy(sizePolicy);
        product_pix3_label->setMinimumSize(QSize(100, 80));
        product_pix3_label->setMaximumSize(QSize(100, 80));
        product_pix3_label->setCursor(QCursor(Qt::PointingHandCursor));
        product_pix3_label->setScaledContents(true);
        product_pix3_label->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(product_pix3_label);

        product_price3_label = new QLabel(LowPriceAreaItem);
        product_price3_label->setObjectName("product_price3_label");
        sizePolicy.setHeightForWidth(product_price3_label->sizePolicy().hasHeightForWidth());
        product_price3_label->setSizePolicy(sizePolicy);
        product_price3_label->setMinimumSize(QSize(80, 13));
        product_price3_label->setMaximumSize(QSize(80, 13));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        product_price3_label->setPalette(palette2);
        product_price3_label->setFont(font2);
        product_price3_label->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(product_price3_label);


        horizontalLayout_2->addLayout(verticalLayout_4);

        right_pushButton = new QPushButton(LowPriceAreaItem);
        right_pushButton->setObjectName("right_pushButton");
        sizePolicy.setHeightForWidth(right_pushButton->sizePolicy().hasHeightForWidth());
        right_pushButton->setSizePolicy(sizePolicy);
        right_pushButton->setMinimumSize(QSize(20, 20));
        right_pushButton->setMaximumSize(QSize(20, 20));
        right_pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/previous.svg"), QSize(), QIcon::Normal, QIcon::Off);
        right_pushButton->setIcon(icon1);
        right_pushButton->setIconSize(QSize(20, 20));
        right_pushButton->setFlat(true);

        horizontalLayout_2->addWidget(right_pushButton);


        horizontalLayout_3->addLayout(horizontalLayout_2);


        retranslateUi(LowPriceAreaItem);

        QMetaObject::connectSlotsByName(LowPriceAreaItem);
    } // setupUi

    void retranslateUi(QWidget *LowPriceAreaItem)
    {
        LowPriceAreaItem->setWindowTitle(QCoreApplication::translate("LowPriceAreaItem", "Form", nullptr));
        tag_title_label->setText(QCoreApplication::translate("LowPriceAreaItem", "\346\240\207\351\242\230", nullptr));
        tag_icon_label->setText(QCoreApplication::translate("LowPriceAreaItem", "icon", nullptr));
        tag_time_label->setText(QCoreApplication::translate("LowPriceAreaItem", "\346\227\266\351\227\264\345\234\272", nullptr));
        hh_label->setText(QCoreApplication::translate("LowPriceAreaItem", "TextLabel", nullptr));
        label_5->setText(QCoreApplication::translate("LowPriceAreaItem", ":", nullptr));
        mm_label->setText(QCoreApplication::translate("LowPriceAreaItem", "TextLabel", nullptr));
        label_8->setText(QCoreApplication::translate("LowPriceAreaItem", ":", nullptr));
        ss_label->setText(QCoreApplication::translate("LowPriceAreaItem", "TextLabel", nullptr));
        left_pushButton->setText(QString());
        product_pix1_label->setText(QCoreApplication::translate("LowPriceAreaItem", "\345\225\206\345\223\201\345\233\276\346\240\207", nullptr));
        product_price1_label->setText(QCoreApplication::translate("LowPriceAreaItem", "\357\277\245\344\273\267\346\240\274", nullptr));
        product_pix2_label->setText(QCoreApplication::translate("LowPriceAreaItem", "\345\225\206\345\223\201\345\233\276\346\240\207", nullptr));
        product_price2_label->setText(QCoreApplication::translate("LowPriceAreaItem", "\357\277\245\344\273\267\346\240\274", nullptr));
        product_pix3_label->setText(QCoreApplication::translate("LowPriceAreaItem", "\345\225\206\345\223\201\345\233\276\346\240\207", nullptr));
        product_price3_label->setText(QCoreApplication::translate("LowPriceAreaItem", "\357\277\245\344\273\267\346\240\274", nullptr));
        right_pushButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class LowPriceAreaItem: public Ui_LowPriceAreaItem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOWPRICEAREAITEM_H
