/********************************************************************************
** Form generated from reading UI file 'DetailDlg.ui'
**
** Created by: Qt User Interface Compiler version 6.5.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DETAILDLG_H
#define UI_DETAILDLG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DetailDlg
{
public:
    QHBoxLayout *horizontalLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_7;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *cur_pix_label;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *toolButton_1;
    QToolButton *toolButton_2;
    QToolButton *toolButton_3;
    QToolButton *toolButton_4;
    QToolButton *toolButton_5;
    QSpacerItem *horizontalSpacer;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *title_label;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLabel *price_label;
    QFormLayout *formLayout;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout_5;
    QLabel *address_label;
    QPushButton *address_pushButton;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_7;
    QWidget *classification_widget;
    QSpacerItem *verticalSpacer;
    QLabel *label_8;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *sub_pushButton;
    QLabel *quantity_label;
    QPushButton *add_pushButton;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *buy_pushButton;
    QPushButton *shop_cart_pushButton;
    QPushButton *collect_pushButton;
    QSpacerItem *horizontalSpacer_3;
    QTabWidget *tabWidget;
    QWidget *description_tab;
    QHBoxLayout *horizontalLayout_9;
    QSpacerItem *horizontalSpacer_8;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_4;
    QWidget *description_widget;
    QSpacerItem *horizontalSpacer_7;
    QWidget *description_img_widget;
    QSpacerItem *horizontalSpacer_9;
    QWidget *tab_2;

    void setupUi(QDialog *DetailDlg)
    {
        if (DetailDlg->objectName().isEmpty())
            DetailDlg->setObjectName("DetailDlg");
        DetailDlg->resize(1151, 799);
        horizontalLayout = new QHBoxLayout(DetailDlg);
        horizontalLayout->setObjectName("horizontalLayout");
        scrollArea = new QScrollArea(DetailDlg);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 1131, 779));
        verticalLayout_3 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_3->setSpacing(20);
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        widget = new QWidget(scrollAreaWidgetContents);
        widget->setObjectName("widget");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        cur_pix_label = new QLabel(widget);
        cur_pix_label->setObjectName("cur_pix_label");
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(cur_pix_label->sizePolicy().hasHeightForWidth());
        cur_pix_label->setSizePolicy(sizePolicy1);
        cur_pix_label->setMinimumSize(QSize(400, 400));
        cur_pix_label->setMaximumSize(QSize(400, 400));
        cur_pix_label->setScaledContents(true);

        verticalLayout->addWidget(cur_pix_label);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        toolButton_1 = new QToolButton(widget);
        toolButton_1->setObjectName("toolButton_1");
        toolButton_1->setMinimumSize(QSize(70, 70));
        toolButton_1->setMaximumSize(QSize(70, 70));

        horizontalLayout_2->addWidget(toolButton_1);

        toolButton_2 = new QToolButton(widget);
        toolButton_2->setObjectName("toolButton_2");
        toolButton_2->setMinimumSize(QSize(70, 70));
        toolButton_2->setMaximumSize(QSize(70, 70));

        horizontalLayout_2->addWidget(toolButton_2);

        toolButton_3 = new QToolButton(widget);
        toolButton_3->setObjectName("toolButton_3");
        toolButton_3->setMinimumSize(QSize(70, 70));
        toolButton_3->setMaximumSize(QSize(70, 70));

        horizontalLayout_2->addWidget(toolButton_3);

        toolButton_4 = new QToolButton(widget);
        toolButton_4->setObjectName("toolButton_4");
        toolButton_4->setMinimumSize(QSize(70, 70));
        toolButton_4->setMaximumSize(QSize(70, 70));

        horizontalLayout_2->addWidget(toolButton_4);

        toolButton_5 = new QToolButton(widget);
        toolButton_5->setObjectName("toolButton_5");
        toolButton_5->setMinimumSize(QSize(70, 70));
        toolButton_5->setMaximumSize(QSize(70, 70));

        horizontalLayout_2->addWidget(toolButton_5);


        verticalLayout->addLayout(horizontalLayout_2);


        horizontalLayout_7->addWidget(widget);

        horizontalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer);

        widget_2 = new QWidget(scrollAreaWidgetContents);
        widget_2->setObjectName("widget_2");
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy2);
        verticalLayout_2 = new QVBoxLayout(widget_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        title_label = new QLabel(widget_2);
        title_label->setObjectName("title_label");
        QFont font;
        font.setPointSize(21);
        title_label->setFont(font);

        verticalLayout_2->addWidget(title_label);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_3 = new QLabel(widget_2);
        label_3->setObjectName("label_3");
        QPalette palette;
        QBrush brush(QColor(255, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        label_3->setPalette(palette);

        horizontalLayout_3->addWidget(label_3);

        price_label = new QLabel(widget_2);
        price_label->setObjectName("price_label");
        sizePolicy2.setHeightForWidth(price_label->sizePolicy().hasHeightForWidth());
        price_label->setSizePolicy(sizePolicy2);
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        price_label->setPalette(palette1);
        QFont font1;
        font1.setPointSize(18);
        price_label->setFont(font1);

        horizontalLayout_3->addWidget(price_label);


        verticalLayout_2->addLayout(horizontalLayout_3);

        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        label_5 = new QLabel(widget_2);
        label_5->setObjectName("label_5");
        QFont font2;
        font2.setPointSize(12);
        label_5->setFont(font2);

        formLayout->setWidget(0, QFormLayout::LabelRole, label_5);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        address_label = new QLabel(widget_2);
        address_label->setObjectName("address_label");
        sizePolicy.setHeightForWidth(address_label->sizePolicy().hasHeightForWidth());
        address_label->setSizePolicy(sizePolicy);
        address_label->setMaximumSize(QSize(200, 16777215));
        QFont font3;
        font3.setBold(true);
        address_label->setFont(font3);
        address_label->setScaledContents(true);

        horizontalLayout_5->addWidget(address_label);

        address_pushButton = new QPushButton(widget_2);
        address_pushButton->setObjectName("address_pushButton");

        horizontalLayout_5->addWidget(address_pushButton);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);


        formLayout->setLayout(0, QFormLayout::FieldRole, horizontalLayout_5);

        label_7 = new QLabel(widget_2);
        label_7->setObjectName("label_7");
        label_7->setFont(font2);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_7);

        classification_widget = new QWidget(widget_2);
        classification_widget->setObjectName("classification_widget");
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(classification_widget->sizePolicy().hasHeightForWidth());
        classification_widget->setSizePolicy(sizePolicy3);

        formLayout->setWidget(1, QFormLayout::FieldRole, classification_widget);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(2, QFormLayout::FieldRole, verticalSpacer);

        label_8 = new QLabel(widget_2);
        label_8->setObjectName("label_8");
        label_8->setFont(font2);

        formLayout->setWidget(3, QFormLayout::LabelRole, label_8);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(20);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(10, -1, -1, -1);
        sub_pushButton = new QPushButton(widget_2);
        sub_pushButton->setObjectName("sub_pushButton");
        sub_pushButton->setMinimumSize(QSize(40, 40));
        sub_pushButton->setMaximumSize(QSize(40, 40));

        horizontalLayout_4->addWidget(sub_pushButton);

        quantity_label = new QLabel(widget_2);
        quantity_label->setObjectName("quantity_label");
        quantity_label->setFont(font3);
        quantity_label->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(quantity_label);

        add_pushButton = new QPushButton(widget_2);
        add_pushButton->setObjectName("add_pushButton");
        add_pushButton->setMinimumSize(QSize(40, 40));
        add_pushButton->setMaximumSize(QSize(40, 40));

        horizontalLayout_4->addWidget(add_pushButton);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_6);


        formLayout->setLayout(3, QFormLayout::FieldRole, horizontalLayout_4);


        verticalLayout_2->addLayout(formLayout);


        horizontalLayout_7->addWidget(widget_2);


        verticalLayout_3->addLayout(horizontalLayout_7);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_2);

        buy_pushButton = new QPushButton(scrollAreaWidgetContents);
        buy_pushButton->setObjectName("buy_pushButton");
        buy_pushButton->setMinimumSize(QSize(140, 50));
        buy_pushButton->setMaximumSize(QSize(140, 50));

        horizontalLayout_6->addWidget(buy_pushButton);

        shop_cart_pushButton = new QPushButton(scrollAreaWidgetContents);
        shop_cart_pushButton->setObjectName("shop_cart_pushButton");
        shop_cart_pushButton->setMinimumSize(QSize(140, 50));
        shop_cart_pushButton->setMaximumSize(QSize(140, 50));

        horizontalLayout_6->addWidget(shop_cart_pushButton);

        collect_pushButton = new QPushButton(scrollAreaWidgetContents);
        collect_pushButton->setObjectName("collect_pushButton");
        collect_pushButton->setMinimumSize(QSize(70, 30));
        collect_pushButton->setMaximumSize(QSize(70, 30));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/cansel-collection.svg"), QSize(), QIcon::Normal, QIcon::Off);
        collect_pushButton->setIcon(icon);

        horizontalLayout_6->addWidget(collect_pushButton);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_3);


        verticalLayout_3->addLayout(horizontalLayout_6);

        tabWidget = new QTabWidget(scrollAreaWidgetContents);
        tabWidget->setObjectName("tabWidget");
        QFont font4;
        font4.setPointSize(15);
        font4.setBold(true);
        tabWidget->setFont(font4);
        description_tab = new QWidget();
        description_tab->setObjectName("description_tab");
        horizontalLayout_9 = new QHBoxLayout(description_tab);
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        horizontalSpacer_8 = new QSpacerItem(352, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_8);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_4);

        description_widget = new QWidget(description_tab);
        description_widget->setObjectName("description_widget");
        QFont font5;
        font5.setPointSize(10);
        font5.setBold(true);
        description_widget->setFont(font5);

        horizontalLayout_8->addWidget(description_widget);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_7);


        verticalLayout_4->addLayout(horizontalLayout_8);

        description_img_widget = new QWidget(description_tab);
        description_img_widget->setObjectName("description_img_widget");
        QFont font6;
        font6.setPointSize(9);
        font6.setBold(false);
        description_img_widget->setFont(font6);

        verticalLayout_4->addWidget(description_img_widget);


        horizontalLayout_9->addLayout(verticalLayout_4);

        horizontalSpacer_9 = new QSpacerItem(352, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_9);

        tabWidget->addTab(description_tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        tabWidget->addTab(tab_2, QString());

        verticalLayout_3->addWidget(tabWidget);

        scrollArea->setWidget(scrollAreaWidgetContents);

        horizontalLayout->addWidget(scrollArea);


        retranslateUi(DetailDlg);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(DetailDlg);
    } // setupUi

    void retranslateUi(QDialog *DetailDlg)
    {
        DetailDlg->setWindowTitle(QCoreApplication::translate("DetailDlg", "Dialog", nullptr));
        cur_pix_label->setText(QCoreApplication::translate("DetailDlg", "\345\233\276\347\211\207", nullptr));
        toolButton_1->setText(QString());
        toolButton_2->setText(QString());
        toolButton_3->setText(QString());
        toolButton_4->setText(QString());
        toolButton_5->setText(QString());
        title_label->setText(QCoreApplication::translate("DetailDlg", "\346\240\207\351\242\230", nullptr));
        label_3->setText(QCoreApplication::translate("DetailDlg", "\357\277\245", nullptr));
        price_label->setText(QCoreApplication::translate("DetailDlg", "\344\273\267\346\240\274", nullptr));
        label_5->setText(QCoreApplication::translate("DetailDlg", "\351\205\215\351\200\201\357\274\232", nullptr));
        address_label->setText(QString());
        address_pushButton->setText(QCoreApplication::translate("DetailDlg", "\351\200\211\346\213\251\345\234\260\345\235\200", nullptr));
        label_7->setText(QCoreApplication::translate("DetailDlg", "\345\210\206\347\261\273\357\274\232", nullptr));
        label_8->setText(QCoreApplication::translate("DetailDlg", "\346\225\260\351\207\217\357\274\232", nullptr));
        sub_pushButton->setText(QCoreApplication::translate("DetailDlg", "-", nullptr));
        quantity_label->setText(QCoreApplication::translate("DetailDlg", "1", nullptr));
        add_pushButton->setText(QCoreApplication::translate("DetailDlg", "+", nullptr));
        buy_pushButton->setText(QCoreApplication::translate("DetailDlg", "\347\253\213\345\215\263\350\264\255\344\271\260", nullptr));
        shop_cart_pushButton->setText(QCoreApplication::translate("DetailDlg", "\345\212\240\345\205\245\350\264\255\347\211\251\350\275\246", nullptr));
        collect_pushButton->setText(QCoreApplication::translate("DetailDlg", "\346\224\266\350\227\217", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(description_tab), QCoreApplication::translate("DetailDlg", "\345\225\206\345\223\201\350\257\246\346\203\205", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("DetailDlg", "\345\225\206\345\223\201\350\257\204\344\273\267", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DetailDlg: public Ui_DetailDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DETAILDLG_H
