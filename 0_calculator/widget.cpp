#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent):
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_pushButton_1_clicked()
{
    ui->display->insert("1");
}

void Widget::on_pushButton_2_clicked()
{
    ui->display->insert("2");
}

void Widget::on_pushButton_3_clicked()
{
    ui->display->insert("3");
}

void Widget::on_pushButton_4_clicked()
{
    ui->display->insert("4");
}

void Widget::on_pushButton_5_clicked()
{
    ui->display->insert("5");
}

void Widget::on_pushButton_6_clicked()
{
    ui->display->insert("6");
}

void Widget::on_pushButton_7_clicked()
{
    ui->display->insert("7");
}

void Widget::on_pushButton_8_clicked()
{
    ui->display->insert("8");
}

void Widget::on_pushButton_9_clicked()
{
    ui->display->insert("9");
}

void Widget::on_pushButton_0_clicked()
{
    ui->display->insert("0");
}






void Widget::on_display_cursorPositionChanged(int arg1, int arg2)
{

}

void Widget::on_btn_add_clicked()
{
    // isEmpty 判断字符串是否为空
    if(ui->display->text().isEmpty()){return;}

}
