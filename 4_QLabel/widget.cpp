#include "widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    setFixedSize(640,480);


    lab1 = new QLabel(this);
    lab1->setText("picture display");
    lab1->setFixedSize(100,35);
    lab1->setStyleSheet("background-color:purple;");

    lab2 = new QLabel(this);
    lab2->setFixedSize(width(),height()*3/4);
    lab2->setStyleSheet("background-color:blue;");
    lab2->move(0,lab1->height());

    btn = new QPushButton("picture",this);
    btn->setFixedSize(80,40);
    btn->move(0, (lab2->y()+lab2->height()));

    lab1->setAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
}

Widget::~Widget()
{
}

