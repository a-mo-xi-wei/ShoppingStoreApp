#ifndef PRODUCTVIEWDELEGATE_H
#define PRODUCTVIEWDELEGATE_H

#include <QObject>
#include <QStyledItemDelegate>
#include<QJsonDocument>

struct ProductInfo{
    enum Kind{
        Ukonw,
        BeautyMakeup,
        Clothing,
        DigitalEquipment,
        Foodstuff,
        Furniture,
        HomeAppliances
    };
    QString number;
    Kind kind;
    QString title;
    QJsonDocument description;
    QJsonDocument classification;
    QJsonDocument image;
    QJsonDocument description_image;

};
//声明元类型
Q_DECLARE_METATYPE(ProductInfo);

class ProductViewDelegate : public QStyledItemDelegate
{
    Q_OBJECT
public:
    ProductViewDelegate(QObject* parent = nullptr);

protected:
    void paint(QPainter *painter, const QStyleOptionViewItem &option, const QModelIndex &index) const override;
    QSize sizeHint(const QStyleOptionViewItem &option, const QModelIndex &index) const override;
};

#endif // PRODUCTVIEWDELEGATE_H
