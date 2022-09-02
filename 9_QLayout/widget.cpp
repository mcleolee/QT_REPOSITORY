#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    // 构造水平布局管理器
    QHBoxLayout *hb = new QHBoxLayout;
    // 向水平布局管理器中添加控件
    // 从上往下
    hb->addWidget(ui->pushButton);
    hb->addWidget(ui->pushButton_2);
    hb->addWidget(ui->pushButton_3);
    hb->addWidget(ui->pushButton_4);
    hb->addWidget(ui->pushButton_6);

    // 添加弹簧，这里调用，将所有水平布局中的控件全部向左挤压
    hb->addStretch();

    // 构造垂直布局管理器
    // 从左往右
    QVBoxLayout *vb = new QVBoxLayout;
    // 向垂直布局管理器中添加水平布局
    vb->addLayout(hb);
    vb->addWidget(ui->textEdit);

    // 设置整个界面的布局，是必须设置的一步，否则前面设置无效
    this->setLayout(vb);


}

Widget::~Widget()
{
    delete ui;
}

