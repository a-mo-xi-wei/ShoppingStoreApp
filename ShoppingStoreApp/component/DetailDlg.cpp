#include "DetailDlg.h"
#include "ui_DetailDlg.h"
#include"UserInfoManager.h"
#include"AddressDialog.h"

#include<QJsonArray>
#include<QJsonObject>
#include<QPixmap>
#include<QGridLayout>
#include<QPushButton>
#include<QFontMetrics>
//#include<QImageReader>
//#include<QFile>
#include<QMessageBox>
#include<QRadioButton>
#include<QButtonGroup>
#include<QDialogButtonBox>
#include<QRandomGenerator>

DetailDlg::DetailDlg(const QVariant& productInfo, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::DetailDlg)
    ,m_proInfo(productInfo.value<ProductInfo>())
{
    ui->setupUi(this);

    initUi();
    initProductInfo();
}

DetailDlg::~DetailDlg()
{
    delete ui;
}

void DetailDlg::initUi()
{
    this->layout()->setSizeConstraint(QLayout::SetMinAndMaxSize);
    ui->scrollAreaWidgetContents->layout()->setSizeConstraint(QLayout::SetMinAndMaxSize);
    ui->title_label->setText(m_proInfo.title);
    connect(ui->toolButton_1,&QToolButton::clicked,this,&DetailDlg::toolButton_clicked);
    connect(ui->toolButton_2,&QToolButton::clicked,this,&DetailDlg::toolButton_clicked);
    connect(ui->toolButton_3,&QToolButton::clicked,this,&DetailDlg::toolButton_clicked);
    connect(ui->toolButton_4,&QToolButton::clicked,this,&DetailDlg::toolButton_clicked);
    connect(ui->toolButton_5,&QToolButton::clicked,this,&DetailDlg::toolButton_clicked);

    //判断是不是已经被收藏
    auto collectProduct = UserInfoManager::getInstance()->getColllectProduct();
    for(auto& val : collectProduct){
        if(val.number == m_proInfo.number){
            UserInfoManager::getInstance()->addCollectProduct(this->m_proInfo);
            ui->collect_pushButton->setIcon(QIcon(":/icons/collection.svg"));
        }
    }
}

void DetailDlg::initProductInfo()
{
    //商品图片
    {
        // QString filePath = "F:\\code_review\\Qt-WorkSpace\\fight\\ShoppingStoreApp\\ShoppingStoreApp\\component\\DetailDlg.cpp/../../shopstore/products/information/beautyMakeup/images/123/2.jpg";
        // qDebug() << "Trying to load image from: " << filePath;


        // QFile file(filePath);
        // if (!file.exists()) {
        //     qDebug() << "open error image.";
        // } else {
        //     qDebug() << "open success successfully.";
        // }
        // QPixmap file(filePath);
        // if (file.isNull()) {
        //     qDebug() << "image is NULL";
        // } else {
        //     qDebug() << "image is valid";
        // }

        // QImageReader reader(filePath);
        // if (!reader.canRead()) {
        //     qDebug() << "QImageReader cannot read the image: " << reader.errorString();
        // } else {
        //     QImage image = reader.read();
        //     if (image.isNull()) {
        //         qDebug() << "Failed to load image with QImageReader: " << reader.errorString();
        //     } else {
        //         qDebug() << "Image loaded successfully with QImageReader.";
        //     }
        // }
    }
    QJsonArray imgArray = m_proInfo.image.array();
    for (int i = 0; i < imgArray.size(); ++i) {
        QPixmap pix(__FILE__ + imgArray.at(i).toString());
        switch (i) {
        case 0:
            ui->cur_pix_label->setPixmap((pix));
            ui->toolButton_1->setIcon(QIcon(pix));
            ui->toolButton_1->setIconSize(QSize(64,64));
            break;
        case 1:
            ui->toolButton_2->setIcon(QIcon(pix));
            ui->toolButton_2->setIconSize(QSize(64,64));
            break;
        case 2:
            ui->toolButton_3->setIcon(QIcon(pix));
            ui->toolButton_3->setIconSize(QSize(64,64));
            break;
        case 3:
            ui->toolButton_4->setIcon(QIcon(pix));
            ui->toolButton_4->setIconSize(QSize(64,64));
            break;
        case 4:
            ui->toolButton_5->setIcon(QIcon(pix));
            ui->toolButton_5->setIconSize(QSize(64,64));
            break;
        default:
            break;
        }
    }

    //商品分类信息
    QJsonArray classificationArray = m_proInfo.classification.array();
    QGridLayout* gridLayout = new QGridLayout(ui->classification_widget);
    //qDebug() << "分类种数 ： " << classificationArray.size();
    for (int i = 0; i < classificationArray.size(); ++i) {
        QJsonObject infoObj = classificationArray.at(i).toObject();
        ProductClassificationInfo info;

        info.explain = infoObj.value("explain").toString();
        info.price = infoObj.value("price").toString();
        info.quantity = infoObj.value("quantity").toInt();

        this->m_classificationInfo.append(info);

        QPushButton* btn = new QPushButton(info.explain);
       
        btn->setFixedHeight(30);
        QFontMetrics fm(btn->font());
        btn->setText(fm.elidedText(btn->text(),Qt::ElideRight,300));
        connect(btn,&QPushButton::clicked,this,&DetailDlg::updateProductPrice);
       
        gridLayout->addWidget(btn,i/3,i%3);

    }
    //默认显示第一个商品分类信息
    this->m_curProductClassification = this->m_classificationInfo.at(0);
    ui->price_label->setText(this->m_curProductClassification.price);

    //加载商品详情信息
    QJsonObject descriptionObj = this->m_proInfo.description.object();
    QStringList keys = descriptionObj.keys();
    QGridLayout* glayout = new QGridLayout(ui->description_widget);

    for (int i = 0; i < keys.size(); ++i) {
        QHBoxLayout* hlayout = new QHBoxLayout;
        QLabel* keyLab = new QLabel(keys[i]+" : ");
        QLabel* valLab = new QLabel(descriptionObj.value(keys[i]).toString());
        QFontMetrics fm (valLab->font());
        valLab->setText(fm.elidedText(valLab->text(),Qt::ElideRight,200));
        hlayout->addWidget(keyLab);
        hlayout->addWidget(valLab);
        glayout->addLayout(hlayout,i/3,i%3,Qt::AlignLeft);

    }
    //加载详情图片
    QJsonArray detailImage = m_proInfo.description_image.array();
    QVBoxLayout* vlayout = new QVBoxLayout(ui->description_img_widget);
    //qDebug()<<ui->description_img_widget->size();
    //qDebug()<<"详情图片的数量 : "<<detailImage.size();
    for (int i = 0; i < detailImage.size(); ++i) {
        QLabel* lab = new QLabel;
        lab->setMaximumSize(750,1000);
        lab->setPixmap(QPixmap(__FILE__ + detailImage.at(i).toString()));
        lab->setScaledContents(true);
        vlayout->addWidget(lab);
    }
}

void DetailDlg::updateProductPrice()
{
    //qDebug() << "更新价格";
    QPushButton* btn = qobject_cast<QPushButton*>(sender());
    if(btn){
        QString text = btn->text();
        for(auto& e : this->m_classificationInfo){
            //qDebug() << e.explain << " " << text;
            QFontMetrics fm(btn->font());
            if(fm.elidedText(e.explain, Qt::ElideRight, 300) == text){
                ui->price_label->setText(e.price);
                //qDebug() << "当前样式 ： " << e.explain << " 价格为 ： " << e.price;
                ui->quantity_label->setText(QString::number(1));
                this->m_curProductClassification = e;
                return;
            }
        }
    }

}

void DetailDlg::toolButton_clicked()
{
    QToolButton* btn = qobject_cast<QToolButton*>(sender());
    ui->cur_pix_label->setPixmap(btn->icon().pixmap(ui->cur_pix_label->size()));
}

void DetailDlg::on_sub_pushButton_clicked()
{
    int q = ui->quantity_label->text().toInt();
    q =( q - 1)  < 1 ? q : --q;
    ui->quantity_label->setText(QString::number(q));
}

void DetailDlg::on_add_pushButton_clicked()
{
    int q = ui->quantity_label->text().toInt();
    if(( q + 1) > this->m_curProductClassification.quantity){
        QMessageBox::information(this,"提示","没有更多库存");
        return;
    }
    ui->quantity_label->setText(QString::number(++q));
}

void DetailDlg::on_address_pushButton_clicked()
{
    AddressInfo info = UserInfoManager::getInstance()->getAddressInfo();
    int size = info.size();
    AddressDialog* dialog = new AddressDialog(this);
    dialog->setAttribute(Qt::WA_DeleteOnClose);
    if(!size){
        QMessageBox::StandardButton btn = QMessageBox::information(this,"提示","没有查询到地址信息，将启用临时地址",QMessageBox::StandardButton::Ok, QMessageBox::StandardButton::Cancel);
        if (btn == QMessageBox::StandardButton::Cancel) { return; }
        
        connect(dialog,&AddressDialog::accepted,[=]{
            AddressInfo::Info ads = dialog->getAddress();
            if(ads.receiverName.isEmpty() || ads.phoneNumber.isEmpty())return;
            QFontMetrics fm(ui->address_label->font());
            ui->address_label->setFixedWidth(fm.horizontalAdvance(ads.toString()));
            ui->address_label->setText(ads.toString());
        });
       
        dialog->exec();
    }
    else{
        dialog->setWindowTitle("地址信息");
        QVBoxLayout* vlayout = new QVBoxLayout(dialog);
        QButtonGroup* btnGroup = new QButtonGroup(this);
        for (int i = 0; i < size; ++i) {
            QString adsstr = info[i].toString();
            QRadioButton* btn = new QRadioButton(adsstr,this);
            if(info[i].isDefault){
                btn->setChecked(true);
                btnGroup->addButton(btn);
                vlayout->addWidget(btn);

            }
        }
        QDialogButtonBox* btnBox = new QDialogButtonBox(Qt::Orientation::Horizontal);
        btnBox->addButton("确定",QDialogButtonBox::AcceptRole);
        btnBox->addButton("取消",QDialogButtonBox::RejectRole);
        vlayout->addWidget(btnBox);
        connect(btnBox,&QDialogButtonBox::accepted,[=]{
            QString ads = btnGroup->checkedButton()->text();
            ui->address_label->setText(ads);
            dialog->exec();

        });
    }
}

void DetailDlg::on_buy_pushButton_clicked()
{
    if (ui->address_label->text().isEmpty()) {
        QMessageBox::warning(this, "警告", "请先选择地址");
        return;
    }
    UserInfoManager* p = UserInfoManager::getInstance();
    OrderInfo order;
    order.time = QDateTime::currentDateTime().toString("yyyy-MM-dd");
    order.number = QTime::currentTime().toString("hh-mm-ss").remove('-') + QString::number(QRandomGenerator::global()->bounded(10000,999999));
    order.coverPicture = ui->cur_pix_label->pixmap();
    order.productNumber = this->m_proInfo.number;
    order.productTitle = this->m_proInfo.title;
    order.totalPrice = QString::number(ui->price_label->text().toDouble() * ui->quantity_label->text().toInt());
    p->addOrderInfo(order);
    QMessageBox::information(this,"提示","购买成功");

}

void DetailDlg::on_shop_cart_pushButton_clicked()
{
    if (ui->address_label->text().isEmpty()) {
        QMessageBox::warning(this, "警告", "请先选择地址");
        return;
    }
    ProductCartInfo info ;
    info.coverPicture = ui->cur_pix_label->pixmap();
    info.productNumber = this->m_proInfo.number;
    info.price = ui->price_label->text();
    info.quantity = ui->quantity_label->text().toInt();
    info.title = this->m_proInfo.title;

    //判断是否已经在购物车中
    auto list = UserInfoManager::getInstance()->getCartProduct();
    for(auto& val : list){
        if(info.productNumber == val.productNumber){
             QMessageBox::warning(this,"警告","已在购物车中");
            return;
        }
    }

    UserInfoManager::getInstance()->addCartProduct(info);
    QMessageBox::information(this,"提示","加入购物车成功");

}

void DetailDlg::on_collect_pushButton_clicked()
{
    if (ui->address_label->text().isEmpty()) {
        QMessageBox::warning(this, "警告", "请先选择地址");
        return;
    }
    auto collectProduct = UserInfoManager::getInstance()->getColllectProduct();
    for(auto& val : collectProduct){
        if(val.number == this->m_proInfo.number){
            qDebug()<<"取消 "<<this->m_proInfo.number<<"收藏";
            UserInfoManager::getInstance()->removeCollectProduct(this->m_proInfo.number);
            ui->collect_pushButton->setIcon(QIcon(":/icons/cansel-collection.svg"));
            return;
        }
    }
    qDebug()<<"设置 "<<this->m_proInfo.number<<" 收藏";
    UserInfoManager::getInstance()->addCollectProduct(this->m_proInfo);
    ui->collect_pushButton->setIcon(QIcon(":/icons/collection.svg"));
}

