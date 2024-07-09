#include "LowPriceAreaItem.h"
#include "ui_LowPriceAreaItem.h"
#include<QTime>
#include<QTimer>
#include<QPainter>
LowPriceAreaItem::LowPriceAreaItem(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::LowPriceAreaItem)
    ,m_timer(new QTimer(this))
{
    ui->setupUi(this);
    connect(m_timer,&QTimer::timeout,this,&LowPriceAreaItem::updateCountDown);
    
}
LowPriceAreaItem::~LowPriceAreaItem()
{
    delete ui;
}

void LowPriceAreaItem::setTag(const QString &title, const QPixmap &pix, QTime startTime)
{
    ui->tag_title_label->setText(title);
    ui->tag_icon_label->setPixmap(pix.scaledToWidth(60,Qt::SmoothTransformation));

    ui->tag_time_label->setText(startTime.toString("hh : mm : ss") + " 场");
    //计算距离当前时间还有多少秒
    this->m_countdown = qAbs(startTime.secsTo(QTime::currentTime()));
    //qDebug()<<"时间差 ： "<<this->m_countdown;
    if(this->m_countdown > 0){
        this->m_timer->start(1000);
    }
    else{
        this->m_countdown = 0;
    }
    //更新倒计时
    updateCountDown();
}

void LowPriceAreaItem::addProdut(const QPixmap &pix, const QString &price)
{
    this->m_products.append(QPair<QPixmap,QString>(pix,price));

}

void LowPriceAreaItem::init()
{
    ui->product_pix1_label->setPixmap(this->m_products[0].first);
    ui->product_price1_label->setText("￥" + this->m_products[0].second);

    ui->product_pix2_label->setPixmap(this->m_products[1].first);
    ui->product_price2_label->setText("￥" + this->m_products[1].second);

    ui->product_pix3_label->setPixmap(this->m_products[2].first);
    ui->product_price3_label->setText("￥" + this->m_products[2].second);

    m_curIndex = 0;
}

void LowPriceAreaItem::updateCountDown()
{
    int hh,mm,ss;
    hh = this->m_countdown / 3600;
    mm = (this->m_countdown % 3600) / 60;
    ss = (this->m_countdown % 3600) % 60;

    if(this->m_countdown <= 0){
        hh = mm = ss = 0;
        this->m_timer->stop();
    }
    ui->hh_label->setText(QString("%1").arg(hh, 2, 10, QChar('0')));
    ui->mm_label->setText(QString("%1").arg(mm, 2, 10, QChar('0')));
    ui->ss_label->setText(QString("%1").arg(ss, 2, 10, QChar('0')));

    this->m_countdown--;
}


void LowPriceAreaItem::on_left_pushButton_clicked()
{
    this->m_curIndex = (this->m_curIndex + this->m_products.size() - 1) % this->m_products.size();

    ui->product_pix1_label->setPixmap(this->m_products[this->m_curIndex].first);
    ui->product_price1_label->setText("￥" + this->m_products[this->m_curIndex].second);

    ui->product_pix2_label->setPixmap(this->m_products[(this->m_curIndex + 1) % this->m_products.size()].first);
    ui->product_price2_label->setText("￥" + this->m_products[(this->m_curIndex + 1) % this->m_products.size()].second);

    ui->product_pix3_label->setPixmap(this->m_products[(this->m_curIndex + 2) % this->m_products.size()].first);
    ui->product_price3_label->setText("￥" + this->m_products[(this->m_curIndex + 2) % this->m_products.size()].second);

}

void LowPriceAreaItem::on_right_pushButton_clicked()
{
    this->m_curIndex = ++ this->m_curIndex % this->m_products.size();

    ui->product_pix1_label->setPixmap(this->m_products[this->m_curIndex].first);
    ui->product_price1_label->setText("￥" + this->m_products[this->m_curIndex].second);

    ui->product_pix2_label->setPixmap(this->m_products[(this->m_curIndex + 1) % this->m_products.size()].first);
    ui->product_price2_label->setText("￥" + this->m_products[(this->m_curIndex + 1) % this->m_products.size()].second);

    ui->product_pix3_label->setPixmap(this->m_products[(this->m_curIndex + 2) % this->m_products.size()].first);
    ui->product_price3_label->setText("￥" + this->m_products[(this->m_curIndex + 2) % this->m_products.size()].second);


}

