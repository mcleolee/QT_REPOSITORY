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

#include <QDebug>
void Widget::on_pushButton_clicked()
{
    qDebug() << "on_pushButton_clicked_1 pushed";
    // QFile file("//Users//raven//QT_REPOSITORY//build-16_QFile-Desktop_Qt_5_14_2_clang_64bit-Debug//file.txt");
    QFile file("f.txt");


    if(!file.isReadable())
        qDebug() << "file is not readAble";
        return;
    bool ret_bool = file.open(QFile::ReadWrite | QFile::Text);
    if(!ret_bool)
    {
        qDebug() << "open failed";
    }

    QTextStream in(&file);

    QString data;

    in >> data;
    ui->textEdit->append(data);
//    QByteArray buf = file.readAll();
//    qDebug() << "size:" << buf.size();
//    ui->textEdit->append(buf);
    // file.readLine();

    file.close();
}


