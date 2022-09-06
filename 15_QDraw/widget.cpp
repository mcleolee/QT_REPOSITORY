#include "widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    this->setFixedSize(1500,900);
}

Widget::~Widget()
{
}

void Widget::paintEvent(QPaintEvent *e)
{
    QPainter p(this);
    QBrush b;
    QPen pen;




//    p.drawLine(0, 0, 100, 100);
//    p.drawLine(100, 0, 0, 100);
//    p.drawLine(100, 100, 200, 100);
//    p.drawEllipse(QPoint(200, 100),50, 50);

    b.setColor(QColor("green"));
    b.setStyle(Qt::Dense2Pattern);
    p.setBrush(b);

    p.translate(width()/2,height()/2);
    p.drawEllipse(QPoint(0,0),400,400);

//    p.rotate(1);
//    p.drawLine(0, 0, 100, 100);

    pen.setWidth(4);
    pen.setColor(QColor("red"));
    pen.setStyle(Qt::DashDotLine);
    p.setPen(pen);
    for(int i=0;i<360;i++)
    {

        p.rotate(1);
        p.drawLine(0, 0, 1000, 000);
    }

}

