#ifndef SHOPCARTDIALOG_H
#define SHOPCARTDIALOG_H

#include <QDialog>

namespace Ui {
class ShopCartDialog;
}

class ShopCartDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ShopCartDialog(QWidget *parent = nullptr);
    ~ShopCartDialog();
    void initUi();
public slots:
    void removeItem(const QString& number);
    void updateSumMoney(const double& ap);
private:
    void load();


private:
    Ui::ShopCartDialog *ui;

    double m_sumMoney;

};

#endif // SHOPCARTDIALOG_H
