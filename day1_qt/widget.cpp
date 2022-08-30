#include "widget.h"
#include "ui_widget.h"

// 注意： QT编辑代码，一动一保存
// 保存       command + s
// 构建运行    command + r
// 注释       command + /
// 代码格式化  command + i

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    // 将当前界面类对象 this 指针与 ui 指针关联
    // 这样 ui 指针才能访问操作 GUI 界面的控件
    ui->setupUi(this);
    qDebug() << "hello world";
    qDebug("hello world haha");
    qDebug();
    qDebug() << "123" << "hello world lmao" << 123;
}

Widget::~Widget()
{
    delete ui;
}

