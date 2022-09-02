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

// file
void Widget::on_pushButton_clicked()
{
    // mac上没用，windows有
    // . 的意思是根目录，要是想加入，在过滤器之前加入"."
    // QFileDialog:: getOpenFileName ();
    // getopenFileName ()：该西数弹出文件对话框，阻塞等待对话框界面的关闭，才返回选中的文件名或 NULL
    QString filename = QFileDialog::getOpenFileName(this,"小黑子，漏出鸡脚了吧","all files(*);;pic(*.jpg *.png);;source code(*.cpp *.h)");

    if(filename.isEmpty())
    {
        qDebug() << "you choose cancle mate";
        return;
    }

    ui->textEdit->append(filename);



}
