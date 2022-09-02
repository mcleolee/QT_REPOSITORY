#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QListWidget>


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
    void on_listWidget_currentRowChanged(int currentRow);

    void on_listWidget_itemDoubleClicked(QListWidgetItem *item);

    void on_pushButton_clicked();

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
