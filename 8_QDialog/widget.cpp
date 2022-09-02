#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

// file
void Widget::on_pushButton_clicked()
{
    // mac上没用，windows有
    // . 的意思是根目录，要是想加入，在过滤器之前加入"."
    // QFileDialog:: getOpenFileName ();
    // getopenFileName ()：该西数弹出文件对话框，阻塞等待对话框界面的关闭，才返回选中的文件名或 NULL
    // 选中打开，就返回选中的文件名;选中取消，就返回 NULL
    QString filename = QFileDialog::getOpenFileName(this,"小黑子，漏出鸡脚了吧","all files(*);;pic(*.jpg *.png);;source code(*.cpp *.h)");

    if(filename.isEmpty())
    {
        qDebug() << "you choose cancel mate";
        return;
    }

    ui->textEdit->append(filename);



}

// message
void Widget::on_pushButton_2_clicked()
{
    int ret = QMessageBox::critical(this,"Warning","Here occured a error",QMessageBox::Ok,QMessageBox::Cancel,QMessageBox::Help);
    // 通过返回值判断，用户选择了消息对话框的哪个按钮
    if(ret == QMessageBox::Cancel)
    {
        return;
    }
}

// input
void Widget::on_pushButton_4_clicked()
{
    QString passwd = QInputDialog::getText(this,"input","password:",QLineEdit::Password);
    if(passwd.isEmpty())
    {
        QMessageBox::warning(this,"warning","enter the password plz");
        return;
    }
    ui->textEdit->append(passwd);
}

// color
void Widget::on_pushButton_3_clicked()
{
    ui->textEdit->setTextColor("128,128,128");
}

// font
void Widget::on_pushButton_6_clicked()
{
    ui->textEdit->setFontItalic(1);
}
