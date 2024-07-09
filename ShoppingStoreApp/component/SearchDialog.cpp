#include "SearchDialog.h"
#include "ui_SearchDialog.h"
#include"ProductViewDelegate.h"
#include"DetailDlg.h"

#include<QScrollBar>
#include<QMessageBox>
#include<QSqlDatabase>
#include<QSqlQuery>
#include<QSqlError>
SearchDialog::SearchDialog(const QString &keyWord, SearchType type,QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::SearchDialog)
    ,m_model(new QStandardItemModel)
    ,m_keyWord(keyWord)
    ,m_type(type)
    ,m_recordSize(0)
{
    ui->setupUi(this);

    this->setMinimumWidth(1200);
    ui->tableView->setMinimumWidth(300*4);
    ui->tableView->setModel(this->m_model);
    ui->tableView->setItemDelegate(new ProductViewDelegate(this));
    ui->tableView->horizontalHeader()->hide();
    ui->tableView->verticalHeader()->hide();
    ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableView->verticalHeader()->setSectionResizeMode(QHeaderView::Fixed);
    ui->tableView->horizontalHeader()->setDefaultSectionSize(250);
    ui->tableView->verticalHeader()->setDefaultSectionSize(330);
    ui->tableView->setShowGrid(false);
    ui->tableView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);

    loadProductInfo(2);

    connect(ui->tableView,&QTableView::doubleClicked,this,&SearchDialog::showDetailPage);
    connect(ui->tableView->verticalScrollBar(),&QScrollBar::valueChanged,this,[=]{
        QScrollBar* vscrollbar = ui->tableView->verticalScrollBar();
        static int oldValue = 0;
        if(vscrollbar->value() < oldValue){
            return ;
        }
        else{
            oldValue = vscrollbar->value();
        }

        //除去广告控件的高度
        int value = vscrollbar->value();
        static int curPage = 0;
        static bool noMore = false;

        if(noMore){
            QMessageBox::information(this,"提示","没有更多商品了");
            return;
        }

        if(value/vscrollbar->pageStep() > curPage){
            int size = loadProductInfo();
            if(size == 0){
                QMessageBox::information(this,"提示","没有更多商品了");
                noMore = true;
                return;
            }
            ++curPage;
        };
    });
}



SearchDialog::~SearchDialog()
{
    delete ui;
}

#define MAXCOLUMN 7
#define MAXRECORDSIZE (MAXCOLUMN * 3)

int SearchDialog::loadProductInfo(int pageCount)
{
    QSqlDatabase db = QSqlDatabase::database("ssapp");
    if(!db.open())return 0;

    QString sql;
    if(this->m_type == SearchType::SearchByName){
        sql = QString("select * from product where title like \'%%%1%%\' limit ")
                  .arg(this->m_keyWord) + QString::number(this->m_recordSize) + ','
                       + QString::number(MAXRECORDSIZE);

    }else{
        sql = QString("select * from product where kind=%1 limit ")
                  .arg(this->m_keyWord.toInt()) + QString::number(this->m_recordSize) + ','
              + QString::number(MAXRECORDSIZE);
    }

    QSqlQuery query(db);

    if(!query.exec(sql)){
        qWarning()<<"数据库查询失败 "<<query.lastError().text();
    }

    this->m_recordSize += query.size();

    QList<QStandardItem*>itemList;
    while(query.next()){
        ProductInfo info;
        info.number = query.value("product_number").toString();
        info.kind = static_cast<ProductInfo::Kind>(query.value("kind").toInt());
        info.title = query.value("title").toString();
        info.description = QJsonDocument::fromJson(query.value("description").toByteArray());
        info.classification = QJsonDocument::fromJson(query.value("classification").toByteArray());
        info.image = QJsonDocument::fromJson(query.value("image").toByteArray());
        info.description_image = QJsonDocument::fromJson(query.value("description_image").toByteArray());

        QStandardItem* item = new QStandardItem();
        item->setEditable(false);

        item->setData(QVariant::fromValue(info),Qt::UserRole + 1);
        itemList.append(item);

        if(itemList.size() == 7){
            this->m_model->appendRow(itemList);
            itemList.clear();
        }
    }
    if (!itemList.isEmpty()) {
        // 插入前禁用所有项
        for (size_t i = itemList.size(); i < MAXCOLUMN; i++)
        {
            QStandardItem* item = new QStandardItem();
            item->setFlags(Qt::NoItemFlags);
            itemList.append(item);
        }
    }
    this->m_model->appendRow(itemList);
    return query.size();
}

void SearchDialog::showDetailPage(const QModelIndex &index)
{
    auto dialog = new DetailDlg(index.data(Qt::UserRole + 1),this);
    dialog->setAttribute(Qt::WA_DeleteOnClose);
    dialog->showMaximized();

}

void SearchDialog::on_pushButton_clicked()
{
    QString key = ui->lineEdit->text();
    if(key.isEmpty())return;
    this->m_model->clear();
    this->m_recordSize = 0;
    this->m_keyWord = key;
    this->m_type = SearchType::SearchByName;
    loadProductInfo(2);

}

