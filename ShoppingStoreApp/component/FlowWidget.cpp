#include "FlowWidget.h"

#include<QPainter>
#include<QPaintEvent>
#include<QDir>
#include<QStandardPaths>
#include<QFileInfo>
#include<QTimer>

#define RADIUS 5
#define BTN_WIDTH 15
#define BTN_HEIGHT 25


FlowWidget::FlowWidget(QWidget *parent)
    : QWidget{parent}
    ,m_timer(new QTimer(this))
    ,m_curIndex(0)
    ,m_btnHide(false)
{

    QFileInfo fileInfo(__FILE__);
    QString path = fileInfo.absolutePath();
    QDir dir(path + "/../shopstore/advertise");
    if(!dir.exists()){
        qWarning()<<"广告图加载失败";
        return;
    }
    //qDebug()<<" path : "<<dir.absolutePath();
    QStringList pixs = dir.entryList(QStringList()<<"*.jpg"<<"*.pngz");
    //qDebug()<<"size : "<<pixs.size();

    for(auto& val : pixs){
        QString p = dir.absolutePath() + "/" + val;
        //qDebug()<<p;
        //"F:/code_review/Qt-WorkSpace/fight/ShoppingStoreApp/shopstore/advertise/1.jpg"
        m_pixmaps.append(QPixmap(p));
    }
    connect(m_timer,&QTimer::timeout,[=](){
        this->m_curIndex = ++this->m_curIndex % this->m_pixmaps.size();
        this->update();
    });
    m_timer->start(4000);

}

void FlowWidget::paintEvent(QPaintEvent *ev)
{
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing,true);
    painter.drawPixmap(this->rect(),m_pixmaps[m_curIndex]);
    //qDebug()<<"size : "<<m_pixmaps.size()<<" path : "<<m_pixmaps[m_curIndex];
    //绘制圆点
    painter.setPen(Qt::NoPen);
    int sp = (this->width() - (this->m_pixmaps.size() * RADIUS * 4)) / 2 + 13;
    for(auto i = 0; i < this->m_pixmaps.size() ; ++i){
        if( i != this->m_curIndex){
            painter.setBrush(QColor(150,150,150));
        }else{
            painter.setBrush(QColor(255,80,0));
        }
        painter.drawEllipse(sp + i * RADIUS * 3,this->height()-20,RADIUS*2,RADIUS*2);
    }

    //按钮隐藏不绘制
    if(this->m_btnHide){
        QWidget::paintEvent(ev);
        return;
    }
    //绘制按钮
    this->m_leftRect = QRect(0,(this->height() - BTN_HEIGHT)/2,BTN_WIDTH,BTN_HEIGHT);
    this->m_rightRect = QRect(this->width() - BTN_WIDTH,(this->height() - BTN_HEIGHT)/2,BTN_WIDTH,BTN_HEIGHT);
    painter.setBrush(QColor(150,151,158,80));
    painter.drawRect(this->m_leftRect);
    painter.drawRect(this->m_rightRect);
    //绘制圆角
    m_roundLeft = this->m_leftRect.adjusted(0,0,BTN_WIDTH-8,0).translated(BTN_WIDTH-BTN_HEIGHT/2+1,0);
    painter.drawPie(m_roundLeft,-90 * 16,180*16);
    m_roundRight = this->m_rightRect.adjusted(0,0,BTN_WIDTH-8,0).translated(-(BTN_WIDTH-4),0);
    painter.drawPie(m_roundRight,90 * 16,180*16);

    //绘制箭头
    painter.drawPixmap(this->m_leftRect,QPixmap("://icons/left.png"));
    painter.drawPixmap(this->m_rightRect,QPixmap("://icons/right.png"));


}

void FlowWidget::mousePressEvent(QMouseEvent *ev)
{
    QPoint pos = ev->pos();
    if(this->m_leftRect.contains(pos) || this->m_roundLeft.contains(pos)){
        this->m_curIndex = (this->m_curIndex + (this->m_pixmaps.size() - 1)) % this->m_pixmaps.size();
    }else if(this->m_rightRect.contains(pos) || this->m_roundRight.contains(pos)){
        this->m_curIndex = ++this->m_curIndex % this->m_pixmaps.size();
    }
    this->update();
}

void FlowWidget::enterEvent(QEnterEvent *ev)
{
    this->m_btnHide = false;
    this->update();
    QWidget::enterEvent(ev);
}

void FlowWidget::leaveEvent(QEvent *ev)
{
    this->m_btnHide = true;
    this->update();
    QWidget::leaveEvent(ev);
}
