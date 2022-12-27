#include "widget.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    // 定义 gui 界面事件处理 类对象 a
    QApplication a(argc, argv);
    // 定义 窗口界面类对象，其基类会自动绘制 gui 界面
    Widget w;
    // 显示 gui 界面
    w.show();
    // exec(): 是事件循环的函数
    // 阻止程序立即结束，检测处理 gui 界面的事件
    // 是 signal 和 slots 的基础前提
    return a.exec();
}
