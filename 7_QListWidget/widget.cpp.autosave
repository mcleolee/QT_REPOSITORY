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

// 在列表部件中点击任意一行，都会 触发 currentRowChanged (int currentRow)信号，
// 并将当前的行号通过形参传递
void Widget::on_listWidget_currentRowChanged(int currentRow)
{
    ui->label->setText(QString::number(currentRow));
}

#include <QDebug>
// 在列表框中双击某个列表项，则触发itemDoubleclicked (QListwidgetItem *item) 信号
// 并将这个列表项的首地址传递出来，QListwidgetItem:列表项的头文件
void Widget::on_listWidget_itemDoubleClicked(QListWidgetItem *item)
{
    // item->text：获取列表项的文本数据
    ui->label->setText(item->text());
    //通过列表项首地址获得 其在列表框中的行号
    qDebug() << ui->listWidget->row(item);
}


void Widget::on_pushButton_clicked()
{
    QString name = ui->lineEdit->text();
    // insertItem(int row, ostring text)：在row行插入text列表项
    ui->listWidget->insertItem(0,name);

    // 插入一个构造的列表项
//    ui->listWidget->insertItem(0, new QListWidgetItem(QIcon("qwq.jpg")),name);

    //在列表框的末尾添加 带图标的列表项
//    ui->listWidget->addItem(new QListWidgetItem(QIcon("qwq.jpg"),name));

}
