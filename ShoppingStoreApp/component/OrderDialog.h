#ifndef ORDERDIALOG_H
#define ORDERDIALOG_H

#include <QDialog>

class OrderDialog : public QDialog
{
    Q_OBJECT
public:
    OrderDialog(QWidget* parent = nullptr , Qt::WindowFlags f = Qt::WindowFlags());
    void initUi();
public slots:
    void removeOrder(const QString& number);

};

#endif // ORDERDIALOG_H
