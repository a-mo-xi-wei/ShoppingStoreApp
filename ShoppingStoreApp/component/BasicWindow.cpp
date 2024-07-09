#include "BasicWindow.h"
#include "ui_BasicWindow.h"
#include"ProductViewDelegate.h"
#include"DetailDlg.h"
#include "SearchDialog.h"

#include<QSqlDatabase>
#include<QSqlError>
#include<QSqlQuery>
#include<QDebug>
#include<QStandardItemModel>
#include<QStandardItem>
#include<QScrollBar>
#include<QVariant>
#include<QList>
#include<QMessageBox>
#include<QFile>

#define PAGE_HEIGHT 330
#define PAGE_WIDTH 250

#define MAXCOLUMN 7
#define MAXRECORDSIZE (MAXCOLUMN * 3)

BasicWindow::BasicWindow(QWidget *parent)
	: QWidget(parent)
	, ui(new Ui::BasicWindow())
    ,m_model(new QStandardItemModel)
    ,m_recordSize(0)
{
    ui->setupUi(this);
    initUI();
    initDB();
}

BasicWindow::~BasicWindow()
{
    delete ui;
}

void BasicWindow::initUI()
{
    this->m_styleStr = R"(  QTableView::item:selected { background-color: #FFFFCC;
                        selection-color: black; }
                            QTableView::item:hover{background-color: #FFFFCC;
                        selection-color: black; })";
    this->setStyleSheet(this->m_styleStr);
    this->showMaximized();

    //让主界面使用滚动条，禁用布局的滚动条
    ui->scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
    ui->scrollAreaWidgetContents->layout()->setSizeConstraint(QLayout::SetMinAndMaxSize);

    //设置主界面的垂直滚动条
    QScrollBar* vscrollbar = ui->scrollArea->verticalScrollBar();
    connect(vscrollbar,&QScrollBar::valueChanged,this,&BasicWindow::adjustScrollbar);
    vscrollbar->setPageStep(PAGE_HEIGHT);

    ui->tableView->setMinimumHeight(PAGE_HEIGHT*MAXCOLUMN);

    //关闭主界面的水平滚动条
    ui->scrollArea->horizontalScrollBar()->setDisabled(true);
    ui->scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    //设置模型
    ui->tableView->setModel(this->m_model);
    //设置代理
    ui->tableView->setItemDelegate(new ProductViewDelegate(this));
    //有你藏tableView的垂直头和水平头
    ui->tableView->horizontalHeader()->hide();
    ui->tableView->verticalHeader()->hide();
    //隐藏tableView的滚动条
    ui->tableView->verticalScrollBar()->hide();
    ui->tableView->horizontalScrollBar()->hide();

    //设置表头
    ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeMode::Stretch);
    ui->tableView->verticalHeader()->setSectionResizeMode(QHeaderView::ResizeMode::Fixed);
    ui->tableView->horizontalHeader()->setDefaultSectionSize(PAGE_WIDTH);
    ui->tableView->verticalHeader()->setDefaultSectionSize(PAGE_HEIGHT);

    //不显示单元格
    ui->tableView->setShowGrid(false);

    //感觉没必要
    ui->tableView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    //设置列数
    this->m_model->setColumnCount(MAXCOLUMN);

    connect(ui->tableView,&QTableView::doubleClicked,this,&BasicWindow::showDetailPage);
    
    //设置分类按钮的槽
    connect(ui->meizhuang_pushButton, &QPushButton::clicked, this, &BasicWindow::classifyButtonClicked);
    connect(ui->shuma_pushButton, &QPushButton::clicked, this, &BasicWindow::classifyButtonClicked);
    connect(ui->jiadian_pushButton, &QPushButton::clicked, this, &BasicWindow::classifyButtonClicked);
    connect(ui->jiaju_pushButton, &QPushButton::clicked, this, &BasicWindow::classifyButtonClicked);
    connect(ui->fuzhuang_pushButton, &QPushButton::clicked, this, &BasicWindow::classifyButtonClicked);
    connect(ui->shipin_pushButton, &QPushButton::clicked, this, &BasicWindow::classifyButtonClicked);
    

}

void BasicWindow::initDB()
{
    //打开数据库
    auto db = QSqlDatabase::addDatabase("QMYSQL","ssapp");
    //设置主机名
    db.setHostName("localhost");	//127.0.0.1
    //设置端口号
    db.setPort(3306);
    //设置账号
    db.setUserName("root");
    //设置密码
    db.setPassword("123456789");
    //设置数据库
    db.setDatabaseName("shopstoredb");
    //qDebug()<<QSqlDatabase::drivers();
    if(!db.open()){
        qDebug()<<"数据库打开失败"<<db.lastError().text();
        return;
    }
    qDebug() << "数据库打开成功";

    loadProductInfo(2);
}

int BasicWindow::loadProductInfo(const int pageCount)
{
    QSqlDatabase db = QSqlDatabase::database("ssapp");
    if(!db.open())return 0;

    QSqlQuery query(db);
    QString sql = "select * from product limit " +
                  QString::number(this->m_recordSize * pageCount)
                  +","+QString::number(MAXRECORDSIZE);
    //query.prepare("select * from product limit ?,?");
    //query.bindValue(0,this->m_recordSize * pageCount);
    //query.bindValue(1,MAXRECORDSIZE);

    if(!query.exec(sql)){
        qWarning()<<"数据库查询失败 "<<query.lastError().text();
    }

    qDebug()<<"查询到的商品数量："<<query.size();

    this->m_recordSize += query.size();
    int count = this->m_recordSize;
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

        if(itemList.size() == MAXCOLUMN){
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

void BasicWindow::adjustScrollbar()
{
    QScrollBar* vscrollbar = ui->scrollArea->verticalScrollBar();
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
    }

}

void BasicWindow::showDetailPage(const QModelIndex &index)
{
    DetailDlg* dialog = new DetailDlg(index.data(Qt::UserRole + 1),this);
    dialog->setAttribute(Qt::WA_DeleteOnClose);
    dialog->setWindowTitle("商品详情信息");
    dialog->showMaximized();
    dialog->exec();
}

/*
void BasicWindow::on_meizhuang_pushButton_clicked()
{
    //ProductInfo::Kind k = ProductInfo::Kind::BeautyMakeup;
    //ProductInfo::BeautyMakeup
    auto key = "美妆";
    auto dialog = new SearchDialog(key);
    dialog->setAttribute(Qt::WA_DeleteOnClose);
    dialog->showMaximized();
    dialog->exec();
}


void BasicWindow::on_shuma_pushButton_clicked()
{
    //ProductInfo::Kind k = ProductInfo::Kind::DigitalEquipment;
    auto key = "数码";
    auto dialog = new SearchDialog(key);
    dialog->setAttribute(Qt::WA_DeleteOnClose);
    dialog->showMaximized();
    dialog->exec();
}


void BasicWindow::on_jiadian_pushButton_clicked()
{
    //ProductInfo::Kind k = ProductInfo::Kind::HomeAppliances;
    auto key = "家电";
    auto dialog = new SearchDialog(key);
    dialog->setAttribute(Qt::WA_DeleteOnClose);
    dialog->showMaximized();
    dialog->exec();
}


void BasicWindow::on_jiaju_pushButton_clicked()
{
    //ProductInfo::Kind k = ProductInfo::Kind::Furniture;
    auto key = "家具";
    auto dialog = new SearchDialog(key);
    dialog->setAttribute(Qt::WA_DeleteOnClose);
    dialog->showMaximized();
    dialog->exec();
}


void BasicWindow::on_fuzhuang_pushButton_clicked()
{
    //ProductInfo::Kind k = ProductInfo::Kind::Clothing;
    auto key = "服装";
    auto dialog = new SearchDialog(key);
    dialog->setAttribute(Qt::WA_DeleteOnClose);
    dialog->showMaximized();
    dialog->exec();
}


void BasicWindow::on_shipin_pushButton_clicked()
{
    //ProductInfo::Kind k = ProductInfo::Kind::Foodstuff;
    auto key = "食品";
    auto dialog = new SearchDialog(key);
    dialog->setAttribute(Qt::WA_DeleteOnClose);
    dialog->showMaximized();
    dialog->exec();

}
*/
//直接用下面的通用槽
void BasicWindow::classifyButtonClicked()
{
    auto btn = qobject_cast<QPushButton*>(sender());
    auto key = btn->text();
    this->m_searchDlg  = new SearchDialog(key,SearchType::SearchByName,this);
    this->m_searchDlg->setAttribute(Qt::WA_DeleteOnClose);
    this->m_searchDlg->showMaximized();
    this->m_searchDlg->exec();
}

void BasicWindow::on_pushButton_clicked()
{
    QString key = ui->lineEdit->text();
    if(key.isEmpty())return;

    auto dialog = new SearchDialog(key);
    dialog->setAttribute(Qt::WA_DeleteOnClose);
    dialog->showMaximized();
}

void BasicWindow::on_black_pushButton_clicked()
{
    QFile file(":/style/black.css");

    if (file.open(QIODevice::ReadOnly)) {
        this->m_styleStr = file.readAll();
    }
    this->setStyleSheet(this->m_styleStr);
    emit turnToBlack(this->m_styleStr);
    ui->product_widget->setStyleSheet(this->m_styleStr);
}

void BasicWindow::on_pink_pushButton_clicked()
{
    QFile file(":/style/pink.css");

    if (file.open(QIODevice::ReadOnly)) {
        this->m_styleStr = file.readAll();
    }
    this->setStyleSheet(this->m_styleStr);
    ui->product_widget->setStyleSheet(this->m_styleStr);
}

void BasicWindow::on_white_pushButton_clicked()
{
    QFile file(":/style/white.css");

    if (file.open(QIODevice::ReadOnly)) {
        this->m_styleStr = file.readAll();
    }
    this->setStyleSheet(this->m_styleStr);
    ui->product_widget->setStyleSheet(this->m_styleStr);
}

void BasicWindow::on_return_pushButton_clicked()
{
    this->m_styleStr = R"(  QTableView::item:selected { background-color: #FFFFCC;
                        selection-color: black; }
                            QTableView::item:hover{background-color: #FFFFCC;
                        selection-color: black; })";
    this->setStyleSheet(this->m_styleStr);
    ui->product_widget->setStyleSheet(this->m_styleStr);
}

