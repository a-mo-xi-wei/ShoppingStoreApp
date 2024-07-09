#pragma once

#include <QWidget>
QT_BEGIN_NAMESPACE
namespace Ui { class BasicWindow; };

class QStandardItemModel;
class SearchDialog;
QT_END_NAMESPACE

class BasicWindow : public QWidget
{
	Q_OBJECT

public:
	BasicWindow(QWidget *parent = nullptr);
    ~BasicWindow();
    //初始化UI
    void initUI();
    //初始化数据库
    void initDB();


public slots:
    int loadProductInfo(const int pageCount = 1);
    void adjustScrollbar();
    void showDetailPage(const QModelIndex &index);

signals:
    void turnToBlack(const QString& styleStr);

private slots:

    void classifyButtonClicked();


    void on_pushButton_clicked();

    void on_black_pushButton_clicked();

    void on_pink_pushButton_clicked();

    void on_white_pushButton_clicked();

    void on_return_pushButton_clicked();

private:
	Ui::BasicWindow *ui;
    QStandardItemModel* m_model;
    int m_recordSize;
    QString m_styleStr;
    SearchDialog* m_searchDlg;
};
