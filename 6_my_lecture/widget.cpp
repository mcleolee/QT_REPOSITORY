 #include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);


    connect(btn,SIGNAL(clicked(book),this),SLOT(QLineEdit(edit)));
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_pushButton_clicked()
{

}
