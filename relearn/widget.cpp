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

// 在列表部件中点击任意一行，都会 触发 currentRowChanged (int currentRow)信号，
// 并将当前的行号通过形参传递
void Widget::on_list_1_currentRowChanged(int currentRow)
{
    ui->label_list->setText(QString::number(currentRow));
}

// 在列表框中双击某个列表项，则触发itemDoubleclicked (QListwidgetItem *item) 信号
// 并将这个列表项的首地址传递出来，QListwidgetItem:列表项的头文件
void Widget::on_list_1_itemDoubleClicked(QListWidgetItem *item)
{
    // item->text：获取列表项的文本数据
    ui->label_list->setText(item->text());
    //通过列表项首地址获得 其在列表框中的行号
    qDebug() << ui->list_1 -> row(item);
}

void Widget::on_btn_add_clicked()
{
    QString name = ui->lineEdit_3->text();
    // insertItem(int row, ostring text)：在row行插入text列表项
    ui->list_1->insertItem(0,name);
    // 输完一个数字就清零，方便输下一个
    ui->lineEdit_3->clear();

    // 插入一个构造的列表项
//    ui->listWidget->insertItem(0, new QListWidgetItem(QIcon("qwq.jpg")),name);

    //在列表框的末尾添加 带图标的列表项
//    ui->listWidget->addItem(new QListWidgetItem(QIcon("qwq.jpg"),name));
}

// ---------------------QDialog------------------------
// file
void Widget::on_btn_file_clicked()
{

}
