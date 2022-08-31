#include "widget.h"


Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    // 设置固定大小
    this->setFixedSize(1000,1000);
    // 设置窗口标题
    this->setWindowTitle("botton");
#if 1
    // 设置窗口图标 1 :使用本地的图片文件，图片文件必须在该项目的 build 目录
    this->setWindowIcon(QIcon("1.PNG"));
#else
    // 设置窗口图标 2 :使用资源图片文件，图片文件必须在工程代码目录
    // 才能作为资源添加到工程中
    // 新建文件 Qt Resource File
    // 在 .qrc 文件中点添加 Add Prefix 将前缀设为 /
    // 点击 Add File 添加想要添加的图片
    this->setWindowIcon(QIcon(":/1.PNG"));
#endif

    // 在堆区构造按钮,指定父对象为 this 当前窗口

    btn1 = new QPushButton("btn1",this); // 带文本的

//    btn1->setFixedSize(100,100);

    btn2 = new QPushButton(QIcon(":/IMG_6513.PNG"),"btn2",this);

    // move()：将控件移动到某个坐标点， width()：求控件的宽度
    btn2->move(100,0);

    btn3 = new QPushButton;
    btn3->setParent(this);
    btn3->setText("btn3");
    btn3->setFixedSize(130,130);
    btn3->setIcon(QIcon(":/IMG_6513.PNG"));
    btn3->setIconSize(QSize(80,80));
    btn3->move((width()/2-btn3->width()/2),(height()/2-btn3->height()/2));


    // 信号与槽关联的方式2:connect()旧式函数
}

void Widget::btn_pressed()
{
    qDebug() << "-------------";
}

Widget::~Widget()
{

}


