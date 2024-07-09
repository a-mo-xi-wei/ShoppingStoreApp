#include "ProductViewDelegate.h"
#include<QPainter>
#include<QJsonArray>
#include<QJsonValue>
#include<QJsonObject>
#include<QPixmap>
#include<QFontMetrics>

ProductViewDelegate::ProductViewDelegate(QObject *parent)
    :QStyledItemDelegate(parent)
{

}

void ProductViewDelegate::paint(QPainter *painter, const QStyleOptionViewItem &option, const QModelIndex &index) const
{
    ProductInfo info = index.data(Qt::UserRole + 1).value<ProductInfo>();
    if(info.kind == ProductInfo::Kind::Ukonw)return;
    //绘制商品封面
    QString pixPath = __FILE__ + info.image.array().at(0).toString();
    //qDebug()<<pixPath;
    QPixmap pix(pixPath);

    //获取商品价格
    QString price = info.classification.array().at(0).toObject().value("price").toString();

    //绘制商品封面
    QRect pixRect(QPoint(option.rect.x()+3,option.rect.y()+5),QSize(option.rect.width()-10,230));
    painter->drawPixmap(pixRect,pix.scaled(pixRect.size(),Qt::KeepAspectRatio));

    //绘制商品名称
    painter->setPen(Qt::black);
    QFont font = painter->font();
    font.setWeight(QFont::Medium);
    font.setPointSize(12);
    painter->setFont(font);
    QFontMetrics fm = painter->fontMetrics();
    int fw = fm.horizontalAdvance(info.title);
    QRect titleRect(QPoint(pixRect.x() + 2,
                           pixRect.y() + pixRect.height() +fm.height() +15),
                    QSize(option.rect.width() - 6, 30));
    if(fw > titleRect.width()){
        //得到每个字的平均宽度
        int ln = titleRect.width() / (fw/info.title.length());
        QString title1 = info.title.sliced(0,ln);
        painter->drawText(titleRect.x(),titleRect.y(),title1);

        QString title2 = info.title.sliced(ln);
        fw = fm.horizontalAdvance(title2);
        if(fw > titleRect.width()){
            ln = titleRect.width() / (fw/title2.length());
            if(ln<title2.length()){
                title2 = title2.sliced(0,ln);
                title2.replace(title2.length()-3,3,"...");
            }
        }
        painter->drawText(titleRect.x(),
                          titleRect.y()+fm.height() + 2,
                          title2);
    }
    else{
        painter->drawText(titleRect,info.title);
    }
    //价格
    QRect priceRect(QPoint(option.rect.x() + 3,
                           option.rect.y()+option.rect.height()-5),
                    QSize(option.rect.width()-3,40));
    painter->setPen(Qt::red);
    painter->drawText(priceRect.x(),priceRect.y(),"￥");

    font.setPointSize(20);
    font.setWeight(QFont::Normal);

    painter->setFont(font);
    painter->drawText(priceRect.x() +20,priceRect.y(),price);


}

QSize ProductViewDelegate::sizeHint(const QStyleOptionViewItem &option, const QModelIndex &index) const
{
    return QSize(250,330);
}
