#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

// 在列表部件中点击任意一行，都会触发 currentRowChanged (int currentRow)信号，
// 并将当前的行号通过形参传递

void Widget::on_listWidget_currentRowChanged(int currentRow)
{
    ui->label->setText(QString::number(currentRow));
}
