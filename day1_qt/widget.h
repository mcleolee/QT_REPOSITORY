#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QDebug>       // 调试头文件，含有打印函数

QT_BEGIN_NAMESPACE
// 命名一个名字空间
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    // 传编译宏，用于指定当前类能使用 signals 和 slots
    // 该元对象 必须 位于工程被 build 之前添加
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private:
    // 定义不完整类型的 ui 野指针
    // 用来操作（访问）ui 界面控件
    Ui::Widget *ui;
};
#endif // WIDGET_H
