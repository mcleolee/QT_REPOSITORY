#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QNetworkAccessManager>
#include <QTextEdit>

#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QJsonValue>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT
private slots:

    void netReply(QNetworkReply *reply);
    void on_pushButton_clicked();

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private:
    Ui::Widget *ui;
    QNetworkAccessManager *manager;
};
#endif // WIDGET_H
