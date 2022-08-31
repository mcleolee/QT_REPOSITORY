#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QLabel>
#include <QPushButton>

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void picShow();
private:
    QLabel *lab1, *lab2;
    QPushButton *btn;


};
#endif // WIDGET_H
