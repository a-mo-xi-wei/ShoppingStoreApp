#include "CollectionDialog.h"
#include "UserInfoManager.h"
#include "CollectionItemDelegate.h"

#include<QListView>
#include<QStandardItemModel>
#include<QVBoxLayout>
#include<QGroupBox>
#include<QVariant>
#include<QStandardItem>

CollectionDialog::CollectionDialog(QWidget *parent)
    :QDialog(parent)
    ,m_view(new QListView(this))
    ,m_model(new QStandardItemModel(this))
{
    this->m_view->setModel(this->m_model);
    this->m_view->setViewMode(QListView::IconMode);
    this->m_view->setMovement(QListView::Static);
    this->m_view->setWrapping(true);
    this->m_view->setFlow(QListView::LeftToRight);
    this->m_view->setItemDelegate(new CollectionItemDelegate(this));

    initUi();

}

void CollectionDialog::initUi()
{
    this->setWindowTitle("收藏");
    this->resize(1280,720);

    QVBoxLayout* vlayout = new QVBoxLayout(this);
    QGroupBox* gBox = new QGroupBox(this);
    gBox->setTitle("我的收藏");
    QVBoxLayout* vlayout1 = new QVBoxLayout(gBox);
    vlayout1->addWidget(this->m_view);
    vlayout->addWidget(gBox);

    UserInfoManager* p = UserInfoManager::getInstance();
    auto products = p->getColllectProduct();
    for (int i = 0; i < products.size(); ++i) {
        QStandardItem* item = new QStandardItem();
        item->setEditable(false);
        item->setData(QVariant::fromValue(products[i]),Qt::UserRole + 1);
        this->m_model->appendRow(item);
    }

}






































