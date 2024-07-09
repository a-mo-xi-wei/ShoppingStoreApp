#ifndef SEARCHDIALOG_H
#define SEARCHDIALOG_H

#include <QDialog>
#include<QStandardItemModel>
enum class SearchType
{
    SearchByName,
    SearchByClassify
};

namespace Ui {
class SearchDialog;
}

class SearchDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SearchDialog(const QString& keyWord,SearchType type = SearchType::SearchByName,QWidget *parent = nullptr);
    ~SearchDialog();
public slots:
    int loadProductInfo(int pageCount = 1);
    void showDetailPage(const QModelIndex& index);


private slots:
    void on_pushButton_clicked();

private:
    Ui::SearchDialog *ui;
    QStandardItemModel* m_model;
    QString m_keyWord;
    SearchType m_type;
    qint64 m_recordSize;
};

#endif // SEARCHDIALOG_H
