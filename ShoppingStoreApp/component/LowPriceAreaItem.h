#ifndef LOWPRICEAREAITEM_H
#define LOWPRICEAREAITEM_H

#include <QWidget>
#include<QList>

namespace Ui {
class LowPriceAreaItem;
}
QT_BEGIN_NAMESPACE
class QTime;
class QTimer;
QT_END_NAMESPACE

class LowPriceAreaItem : public QWidget
{
    Q_OBJECT

public:
    explicit LowPriceAreaItem(QWidget *parent = nullptr);
    ~LowPriceAreaItem();
    void setTag(const QString& title,const QPixmap& pix,QTime startTime);
    void addProdut(const QPixmap& pix,const QString& price);
    void init();
public slots:
    void updateCountDown();
private slots:
    void on_left_pushButton_clicked();

    void on_right_pushButton_clicked();

private:
    Ui::LowPriceAreaItem *ui;
    QList<QPair<QPixmap,QString>>m_products;
    int m_countdown;    //倒计时
    QTimer* m_timer;

    int m_curIndex;
};

#endif // LOWPRICEAREAITEM_H
