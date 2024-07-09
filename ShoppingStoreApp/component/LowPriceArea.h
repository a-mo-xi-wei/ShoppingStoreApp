#ifndef LOWPRICEAREA_H
#define LOWPRICEAREA_H

#include"LowPriceAreaItem.h"
#include <QWidget>


class LowPriceArea : public QWidget
{
    Q_OBJECT
public:
    LowPriceArea(QWidget *parent = nullptr);
private:
    void loadTimeLimitArea();
    void loadspecialOffArea();
    void initUI();

private:
    LowPriceAreaItem* m_timeLimitArea{};
    LowPriceAreaItem* m_speciaslOffArea{};


};

#endif // LOWPRICEAREA_H
