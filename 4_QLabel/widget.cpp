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

    connect(btn, SIGNAL(clicked(bool)),this,SLOT(picShow()));
}

void Widget::picShow()
{
    // setPixmap() 让label显示图片
    // .scaled() 访问前面成员，缩放到某个控件的大小
    lab2->setPixmap(QPixmap(":/IMG_6513.PNG").scaled(lab2->width(),lab2->height()));
}

Widget::~Widget()
{
}

