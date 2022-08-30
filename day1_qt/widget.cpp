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

    // qt 中所有类库提供的类名或头文件，都是大写字母开头
    // qt 中所有接口函数，都是小写字母开头

    // qDebug(): 函数内部构造类一个默认的输出流对象
    qDebug() << "hello world";
    qDebug("hello world haha");
    qDebug();
    qDebug() << "123" << "hello world lmao" << 123;
    qDebug("123");
    QString str = QString("123") + QString("qwe");
    qDebug() << str;
    // qDebug() 格式化输出
    qDebug("%d",69);

    int a=69, b=96;
    qDebug() << a+b;
    qDebug("%d + %d = %d",a,b,a+b);
}

Widget::~Widget()
{
    delete ui;
}

