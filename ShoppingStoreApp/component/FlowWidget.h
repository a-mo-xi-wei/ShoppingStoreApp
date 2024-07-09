#ifndef FLOWWIDGET_H
#define FLOWWIDGET_H

#include <QWidget>

QT_BEGIN_NAMESPACE
class QPaintEvent;
class QTimer;
QT_END_NAMESPACE

class FlowWidget : public QWidget
{
    Q_OBJECT
public:
    explicit FlowWidget(QWidget *parent = nullptr);

protected:
    void paintEvent(QPaintEvent* ev)override;
    void mousePressEvent(QMouseEvent* ev)override;
    void enterEvent(QEnterEvent* ev)override;
    void leaveEvent(QEvent* ev)override;

private:
    QTimer* m_timer{};
    QList<QPixmap>m_pixmaps;
    int m_curIndex;
    bool m_btnHide;
    QRect m_leftRect;
    QRect m_roundLeft;
    QRect m_rightRect;
    QRect m_roundRight;
};

#endif // FLOWWIDGET_H
