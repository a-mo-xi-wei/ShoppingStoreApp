#ifndef DETAILDLG_H
#define DETAILDLG_H

#include <QDialog>
#include<QList>
#include"ProductViewDelegate.h"

namespace Ui {
class DetailDlg;
}

struct ProductClassificationInfo
{
    QString explain;
    QString price;
    int quantity;
};

class DetailDlg : public QDialog
{
    Q_OBJECT

public:
    explicit DetailDlg(const QVariant& productInfo, QWidget *parent = nullptr);
    ~DetailDlg();

private:
    void initUi();
    void initProductInfo();

public slots:
    void updateProductPrice();
    void toolButton_clicked();

private slots:

    void on_sub_pushButton_clicked();

    void on_add_pushButton_clicked();

    void on_address_pushButton_clicked();

    void on_buy_pushButton_clicked();

    void on_shop_cart_pushButton_clicked();

    void on_collect_pushButton_clicked();

private:
    Ui::DetailDlg *ui;
    ProductInfo m_proInfo;
    QList<ProductClassificationInfo>m_classificationInfo;
    ProductClassificationInfo m_curProductClassification;
};

#endif // DETAILDLG_H
