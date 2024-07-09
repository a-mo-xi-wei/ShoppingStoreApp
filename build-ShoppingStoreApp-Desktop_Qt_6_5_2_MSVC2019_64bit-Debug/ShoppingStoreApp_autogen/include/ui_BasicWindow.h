/********************************************************************************
** Form generated from reading UI file 'BasicWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BASICWINDOW_H
#define UI_BASICWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "FlowWidget.h"
#include "Login.h"
#include "LowPriceArea.h"

QT_BEGIN_NAMESPACE

class Ui_BasicWindow
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *logo;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_6;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_3;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_3;
    QPushButton *meizhuang_pushButton;
    QPushButton *shuma_pushButton;
    QPushButton *jiadian_pushButton;
    QPushButton *jiaju_pushButton;
    QPushButton *fuzhuang_pushButton;
    QPushButton *shipin_pushButton;
    FlowWidget *flow_widget;
    LowPriceArea *product_widget;
    Login *login_widget;
    QTableView *tableView;

    void setupUi(QWidget *BasicWindow)
    {
        if (BasicWindow->objectName().isEmpty())
            BasicWindow->setObjectName("BasicWindow");
        BasicWindow->resize(1112, 770);
        BasicWindow->setMinimumSize(QSize(700, 500));
        verticalLayout = new QVBoxLayout(BasicWindow);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName("verticalLayout_4");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        logo = new QLabel(BasicWindow);
        logo->setObjectName("logo");
        logo->setMaximumSize(QSize(150, 140));
        logo->setPixmap(QPixmap(QString::fromUtf8(":/icons/logo.png")));
        logo->setScaledContents(true);
        logo->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(logo);


        verticalLayout_4->addLayout(horizontalLayout_2);


        horizontalLayout_4->addLayout(verticalLayout_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        lineEdit = new QLineEdit(BasicWindow);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setMinimumSize(QSize(0, 40));
        lineEdit->setMaximumSize(QSize(16777215, 40));

        horizontalLayout->addWidget(lineEdit);

        pushButton = new QPushButton(BasicWindow);
        pushButton->setObjectName("pushButton");
        pushButton->setMinimumSize(QSize(0, 40));
        pushButton->setMaximumSize(QSize(16777215, 40));

        horizontalLayout->addWidget(pushButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        horizontalLayout_4->addLayout(horizontalLayout);


        verticalLayout->addLayout(horizontalLayout_4);

        scrollArea = new QScrollArea(BasicWindow);
        scrollArea->setObjectName("scrollArea");
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(scrollArea->sizePolicy().hasHeightForWidth());
        scrollArea->setSizePolicy(sizePolicy);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 1088, 593));
        verticalLayout_6 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_6->setSpacing(10);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(scrollAreaWidgetContents);
        widget->setObjectName("widget");
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy1);
        widget->setMinimumSize(QSize(0, 340));
        widget->setMaximumSize(QSize(16777215, 340));
        horizontalLayout_3 = new QHBoxLayout(widget);
        horizontalLayout_3->setSpacing(20);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(20, 0, 20, 10);
        groupBox = new QGroupBox(widget);
        groupBox->setObjectName("groupBox");
        groupBox->setMinimumSize(QSize(0, 0));
        groupBox->setCursor(QCursor(Qt::PointingHandCursor));
        groupBox->setAlignment(Qt::AlignCenter);
        verticalLayout_3 = new QVBoxLayout(groupBox);
        verticalLayout_3->setSpacing(10);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setSizeConstraint(QLayout::SetFixedSize);
        verticalLayout_3->setContentsMargins(10, 10, 10, 10);
        meizhuang_pushButton = new QPushButton(groupBox);
        meizhuang_pushButton->setObjectName("meizhuang_pushButton");
        meizhuang_pushButton->setMinimumSize(QSize(0, 30));

        verticalLayout_3->addWidget(meizhuang_pushButton);

        shuma_pushButton = new QPushButton(groupBox);
        shuma_pushButton->setObjectName("shuma_pushButton");
        shuma_pushButton->setMinimumSize(QSize(0, 30));

        verticalLayout_3->addWidget(shuma_pushButton);

        jiadian_pushButton = new QPushButton(groupBox);
        jiadian_pushButton->setObjectName("jiadian_pushButton");
        jiadian_pushButton->setMinimumSize(QSize(0, 30));

        verticalLayout_3->addWidget(jiadian_pushButton);

        jiaju_pushButton = new QPushButton(groupBox);
        jiaju_pushButton->setObjectName("jiaju_pushButton");
        jiaju_pushButton->setMinimumSize(QSize(0, 30));

        verticalLayout_3->addWidget(jiaju_pushButton);

        fuzhuang_pushButton = new QPushButton(groupBox);
        fuzhuang_pushButton->setObjectName("fuzhuang_pushButton");
        fuzhuang_pushButton->setMinimumSize(QSize(0, 30));

        verticalLayout_3->addWidget(fuzhuang_pushButton);

        shipin_pushButton = new QPushButton(groupBox);
        shipin_pushButton->setObjectName("shipin_pushButton");
        shipin_pushButton->setMinimumSize(QSize(0, 30));

        verticalLayout_3->addWidget(shipin_pushButton);


        horizontalLayout_3->addWidget(groupBox);

        flow_widget = new FlowWidget(widget);
        flow_widget->setObjectName("flow_widget");
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(flow_widget->sizePolicy().hasHeightForWidth());
        flow_widget->setSizePolicy(sizePolicy2);
        flow_widget->setMinimumSize(QSize(220, 340));
        flow_widget->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_3->addWidget(flow_widget);

        product_widget = new LowPriceArea(widget);
        product_widget->setObjectName("product_widget");
        QSizePolicy sizePolicy3(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(product_widget->sizePolicy().hasHeightForWidth());
        product_widget->setSizePolicy(sizePolicy3);
        product_widget->setMinimumSize(QSize(0, 340));
        product_widget->setCursor(QCursor(Qt::ArrowCursor));

        horizontalLayout_3->addWidget(product_widget);

        login_widget = new Login(widget);
        login_widget->setObjectName("login_widget");
        sizePolicy2.setHeightForWidth(login_widget->sizePolicy().hasHeightForWidth());
        login_widget->setSizePolicy(sizePolicy2);
        login_widget->setMinimumSize(QSize(307, 340));
        login_widget->setMaximumSize(QSize(307, 340));

        horizontalLayout_3->addWidget(login_widget);


        verticalLayout_6->addWidget(widget);

        tableView = new QTableView(scrollAreaWidgetContents);
        tableView->setObjectName("tableView");
        tableView->horizontalHeader()->setVisible(true);
        tableView->horizontalHeader()->setHighlightSections(true);

        verticalLayout_6->addWidget(tableView);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);


        retranslateUi(BasicWindow);

        QMetaObject::connectSlotsByName(BasicWindow);
    } // setupUi

    void retranslateUi(QWidget *BasicWindow)
    {
        BasicWindow->setWindowTitle(QCoreApplication::translate("BasicWindow", "BasicWindow", nullptr));
        logo->setText(QString());
        pushButton->setText(QCoreApplication::translate("BasicWindow", "\346\220\234\347\264\242", nullptr));
        groupBox->setTitle(QCoreApplication::translate("BasicWindow", "\345\210\206\347\261\273", nullptr));
        meizhuang_pushButton->setText(QCoreApplication::translate("BasicWindow", "\347\276\216\345\246\206", nullptr));
        shuma_pushButton->setText(QCoreApplication::translate("BasicWindow", "\346\225\260\347\240\201", nullptr));
        jiadian_pushButton->setText(QCoreApplication::translate("BasicWindow", "\345\256\266\347\224\265", nullptr));
        jiaju_pushButton->setText(QCoreApplication::translate("BasicWindow", "\345\256\266\345\205\267", nullptr));
        fuzhuang_pushButton->setText(QCoreApplication::translate("BasicWindow", "\346\234\215\350\243\205", nullptr));
        shipin_pushButton->setText(QCoreApplication::translate("BasicWindow", "\351\243\237\345\223\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BasicWindow: public Ui_BasicWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BASICWINDOW_H
