#include "widget.h"
#include "ui_widget.h"
#include "mythread.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->progressBar->setValue(0);

}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_pushButton_clicked()
{
    thread = new MyThread;

    connect(thread, &MyThread::dataChange, ui->progressBar, &QProgressBar::setValue);
    connect(thread, &MyThread::finished, thread, &MyThread::deleteLater);

    thread->start();
}
