#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

#include <QPaintEvent>

#include <QPainter>
#include <QPen>
#include <QBrush>



class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

    void paintEvent(QPaintEvent *e);
};
#endif // WIDGET_H
