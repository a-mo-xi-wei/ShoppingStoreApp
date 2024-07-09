#ifndef COLLECTIONITEMDELEGATE_H
#define COLLECTIONITEMDELEGATE_H

#include <QObject>
#include <QStyledItemDelegate>

class CollectionItemDelegate : public QStyledItemDelegate
{
    Q_OBJECT
public:
    explicit CollectionItemDelegate(QObject *parent = nullptr);

protected:
    void paint(QPainter *painter, const QStyleOptionViewItem &option, const QModelIndex &index) const override;
    QSize sizeHint(const QStyleOptionViewItem &option, const QModelIndex &index) const override;
};

#endif // COLLECTIONITEMDELEGATE_H
