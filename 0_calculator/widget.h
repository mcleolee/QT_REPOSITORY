#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

/*
    Qt 的工作原理：事件驱动、信号与槽机制
        事件：
            在 GUI 界面的任何控件上产生的任何事情
            包括 鼠标点击、点击、按压、松开、控件移动、定时器超时等
            都被成为事件
        信号：
            是一个不完整的函数（只有声明没有定义），由系统提供或者是 用户声明在类体的 signals 区域。
        槽函数：
            是一个完整的西数（既有声明又有定义），也是类的成员函数。
            由系统提供或者是 用户声明在类体的 slots 区城。
            槽函数是类的成员函数，也可以有 访问权限限定。

        事件驱动：
            在 GUI 界面任何控件产生的任何事件，都会触发（调用）相应的信号，通知用户进行操作
        信号与槽机制：
            将信号与某个槽函数进行关联(注册、连接、绑定），
            当信号被触发，系统自动调用关联的槽函数，然后在槽函数中实現具体功能代码。

        注意：
            信号的触发，不一定必须是事件的产生，也可以是用户自己手动触发



*/

#include <QDebug>

QT_BEGIN_NAMESPACE
namespace Ui
{
    class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

/*
 槽函数声明区，只有声明在 slots 下方的函数，
 才能被称为槽函数
 信号与槽的关联方式之一 由设计器中右键 转到槽 进行关联
    固定语法结构
        void on_obiectName_signal();
 代表某个对象名为 objectName 的控件关联了 signal 信号
 当 signal 信号被触发时，系统自动调用该槽函数

*/
private slots:


    void on_pushButton_1_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_4_clicked();
    void on_pushButton_5_clicked();
    void on_pushButton_6_clicked();
    void on_pushButton_7_clicked();
    void on_pushButton_8_clicked();
    void on_pushButton_9_clicked();
    void on_pushButton_0_clicked();


    void on_display_cursorPositionChanged(int arg1, int arg2);

    void on_btn_add_clicked();

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
