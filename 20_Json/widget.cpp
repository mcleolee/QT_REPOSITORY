#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    manager = new QNetworkAccessManager(this);
    connect(manager, &QNetworkAccessManager::finished, this, &Widget::netReply);
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_pushButton_clicked()
{
    QString url = "http://wthrcdn.etouch.cn/weather_mini?city=" + ui->lineEdit->text();
    QNetworkRequest request;
    request.setUrl(QUrl(url));
    manager->get(request);



}

#include <QDebug>
void Widget::netReply(QNetworkReply *reply)
{
    QByteArray data = reply->readAll();
    qDebug() << "reply:" << data;

    // ui->textEdit->setHtml(data);
    QJsonObject obj = QJsonDocument::fromJson(data).object();
    if(!obj.contains("data"))
    {
        qDebug() << "did not recieve any useful data";
        return;
    }
    obj = obj.value("data").toObject();
    qDebug() << "obj:" << obj;

    if(!obj.contains("yesterday"))
    {
        qDebug() << "did not recieve data of yesterday";
        return;
    }
    QJsonObject obj_ystd = obj.value("yesterday").toObject();

    qDebug() << "obj-yesterday:" << obj_ystd;
    QString type = obj_ystd.value("type").toString();

}



