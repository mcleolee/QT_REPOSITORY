#include "widget.h"
#include "ui_widget.h"
#include "MyHeader.h"

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

    // --------------------------------------------------
    // ----------- 手动设置，不用 widget.ui ---------------
    // 设置固定大小
    //this->setFixedSize(700,300);
    // 设置窗口标题
    this->setWindowTitle("Fuck you");
    //设置图标
#if 0
    // 设置窗口图标 1 :使用本地的图片文件，图片文件必须在该项目的 build 目录
    this->setWindowIcon(QIcon("cat_2.png"));
#else
    // 设置窗口图标 2 :使用资源图片文件，图片文件必须在工程代码目录
    // 才能作为资源添加到工程中
    // 新建文件 Qt Resource File
    // 在 .qrc 文件中点添加 Add Prefix 将前缀设为 /
    // 点击 Add File 添加想要添加的图片
    this->setWindowIcon(QIcon("/train.JPG"));
#endif
    // ----------- 结束手动设置，不用 widget.ui --------------
    // ----------------------------------------------------
}

Widget::~Widget()
{
    delete ui;
}

// 把第一个框的文字复制到第二个框
void Widget::on_btm_comfirm_clicked()
{
    // text():获取文本数据，返回 QString 类型，QString 为 Qt 中的字符串类型
    // qDebug() << "------comfirm------" << ui->edit_comfirm->text();
    QString str = ui->lineEdit_1->text();
    qDebug() << str;
    // setText(const QString &)
    // setText(QString):设置控件的文本数据
    ui->lineEdit_2->setText(str);

        // 一行写完：
        // ui->edit_delete->setText(ui->edit_comfirm->text());
}

void Widget::on_testQDebug_clicked()
{
    testDebug();
}
