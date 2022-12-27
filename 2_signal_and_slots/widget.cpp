#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent):
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_comfirm_pushButton_clicked()
{
    // text():获取文本数据，返回 QString 类型，QString 为 Qt 中的字符串类型
    // qDebug() << "------comfirm------" << ui->edit_comfirm->text();

    QString str = ui->edit_comfirm->text();
    qDebug() << str;

    // setText(const QString &)
    // setText(QString):设置控件的文本数据
    ui->edit_delete->setText(str);

    // 一行写完：
    // ui->edit_delete->setText(ui->edit_comfirm->text());

}

void Widget::on_delete_pushButton_2_clicked()
{
    // backspace() 删除尾部的一个字符
    ui->edit_delete->backspace();
}

void Widget::on_one_pushButton_clicked()
{
    ui->edit_3->insert("1");
}

void Widget::on_two_pushButton_2_clicked()
{
    ui->edit_3->insert("2");
}

void Widget::on_add_pushButton_clicked()
{
    ui->edit_3->insert("+");
}

void Widget::on_equal_pushButton_clicked()
{
    QString data = ui->edit_3->text();

    int a,b;
    char func;

    // toStdString()    将 QString 类型转换为 String 类型
    // data()           将 String 类型转换成 const char * 类型
    // sscanf()         将 const char * 地址上的数据按照某种格式，复制给后面的变量
    sscanf(data.toStdString().data(),"%d%c%d",&a,&func,&b);

    // QString::number(int): number 将 int 类型数据转换
    ui->edit_comfirm->setText(QString::number(a));
    ui->edit_delete->setText(QString::number(b));
}


