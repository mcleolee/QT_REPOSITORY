#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

#include <QIcon>
#include <QDebug>



// 引入按钮类的头文件
#include <QPushButton>

// #include <QTextToSpeech>

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
private slots:
    // 用户声明的槽函数
    void  btn_pressed();
private:
    // 定义按钮类对象指针
    QPushButton *btn1; // 然后去widget.cpp文件在堆区构造该按钮
    QPushButton *btn2;
    QPushButton *btn3;
};
#endif // WIDGET_H
