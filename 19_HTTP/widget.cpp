#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    manager = new QNetworkAccessManager(this);
    connect(manager, SIGNAL(finished(QNetworkReply*)), this, SLOT(netReply(QNetworkReply *)));
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_pushButton_clicked()
{
    QString url = ui->lineEdit->text();
    QNetworkRequest request;
    request.setUrl(QUrl(url));
    manager->get(request);


}

#include <QDebug>
void Widget::netReply(QNetworkReply *reply)
{
    QByteArray data = reply->readAll();
    qDebug() << "reply:" << data;

    ui->textEdit->setHtml(data);
    ui->textBrowser->setHtml(data);

    // ui->textBrowser->setHtml(data);
}
