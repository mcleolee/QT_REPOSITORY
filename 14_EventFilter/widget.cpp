#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    ui->pushButton->installEventFilter(this);
    ui->pushButton->setMouseTracking(true);
}

bool Widget::eventFilter(QObject *watched, QEvent *event)
{
    if(watched == ui->pushButton)
    {
        if(event->type() == QEvent::MouseMove)
        {
            QMouseEvent *e = (QMouseEvent *)event;
            ui->label->move(e->x(), e->y() - ui->pushButton->y());
            return true;
        }
        else
        {
            return false;
        }
    }
    return QWidget::eventFilter(watched, event);
}

Widget::~Widget()
{
    delete ui;
}

