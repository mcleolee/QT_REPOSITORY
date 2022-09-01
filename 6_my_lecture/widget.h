#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
// 引入按钮类的头文件
#include <QPushButton>


QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:

    void on_btn_1_clicked();

private:
    Ui::Widget *ui;


};
#endif // WIDGET_H
