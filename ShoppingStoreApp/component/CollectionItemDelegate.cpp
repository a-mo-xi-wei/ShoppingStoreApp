#include "CollectionItemDelegate.h"
#include "ProductViewDelegate.h"

#include<QPainter>
#include<QPixmap>
#include<QJsonArray>
#include<QJsonObject>
#include<QFontMetrics>

CollectionItemDelegate::CollectionItemDelegate(QObject *parent)
    : QStyledItemDelegate{parent}
{}

void CollectionItemDelegate::paint(QPainter *painter, const QStyleOptionViewItem &option, const QModelIndex &index) const
{
    ProductInfo info = index.data(Qt::UserRole + 1).value<ProductInfo>();
    QPen oldPen = painter->pen();
    QFont oldFont = painter->font();
    //绘制商品封面
    QString path = __FILE__ + info.image.array().at(0).toString();
    //qDebug()<<"封面图片 : "<<path;
    QPixmap pix = QPixmap(path).scaled(150,150,Qt::KeepAspectRatio);
    painter->drawPixmap(option.rect.x() + (option.rect.width() - pix.width()) / 2,
                        option.rect.y()+10,pix);
    //绘制标题
    QFontMetrics fm(oldFont);
    QString title = fm.elidedText(info.title,Qt::ElideRight,option.rect.width() - 10);
    painter->drawText(option.rect.x() + 5,option.rect.y() + 180 + fm.height(),title);
    //绘制价格
    QString price = info.classification.array().at(0).toObject().value("price").toString();
    painter->setPen(Qt::red);
    QFont ft = painter->font();
    ft.setPixelSize(18);
    painter->setFont(ft);

    fm = QFontMetrics(painter->font());
    int fw = fm.horizontalAdvance("￥" + price);

    painter->drawText(option.rect.x() + (option.rect.width() - fw) / 2,
                      option.rect.y() + option.rect.height() - 5,"￥" + price);
    //样式复原
    painter->setPen(oldPen);
    painter->setFont(oldFont);

}

QSize CollectionItemDelegate::sizeHint(const QStyleOptionViewItem &option, const QModelIndex &index) const
{
    return QSize(150,230);
}
