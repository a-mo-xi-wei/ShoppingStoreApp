#ifndef COLLECTIONDIALOG_H
#define COLLECTIONDIALOG_H

#include <QDialog>

class QListView;
class QStandardItemModel;

class CollectionDialog : public QDialog
{
    Q_OBJECT
public:
    CollectionDialog(QWidget* parent = nullptr);
    void initUi();
private:
    QListView* m_view;
    QStandardItemModel* m_model;
};

#endif // COLLECTIONDIALOG_H
