/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLineEdit *display;
    QPushButton *pushButton_1;
    QPushButton *pushButton_2;
    QPushButton *btn_add;
    QPushButton *equal_pushButton;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_0;
    QPushButton *btn_minus;
    QPushButton *btn_mtpl;
    QPushButton *btn_divide;
    QPushButton *pushButton_dot;
    QLineEdit *display_2;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(343, 233);
        display = new QLineEdit(Widget);
        display->setObjectName(QString::fromUtf8("display"));
        display->setGeometry(QRect(10, 20, 321, 31));
        pushButton_1 = new QPushButton(Widget);
        pushButton_1->setObjectName(QString::fromUtf8("pushButton_1"));
        pushButton_1->setGeometry(QRect(30, 90, 71, 32));
        pushButton_2 = new QPushButton(Widget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(100, 90, 71, 32));
        btn_add = new QPushButton(Widget);
        btn_add->setObjectName(QString::fromUtf8("btn_add"));
        btn_add->setGeometry(QRect(240, 90, 71, 32));
        equal_pushButton = new QPushButton(Widget);
        equal_pushButton->setObjectName(QString::fromUtf8("equal_pushButton"));
        equal_pushButton->setGeometry(QRect(170, 180, 71, 32));
        pushButton_3 = new QPushButton(Widget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(170, 90, 71, 32));
        pushButton_4 = new QPushButton(Widget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(30, 120, 71, 32));
        pushButton_5 = new QPushButton(Widget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(100, 120, 71, 32));
        pushButton_6 = new QPushButton(Widget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(170, 120, 71, 32));
        pushButton_7 = new QPushButton(Widget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(30, 150, 71, 32));
        pushButton_8 = new QPushButton(Widget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(170, 150, 71, 32));
        pushButton_9 = new QPushButton(Widget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(100, 150, 71, 32));
        pushButton_0 = new QPushButton(Widget);
        pushButton_0->setObjectName(QString::fromUtf8("pushButton_0"));
        pushButton_0->setGeometry(QRect(30, 180, 71, 32));
        btn_minus = new QPushButton(Widget);
        btn_minus->setObjectName(QString::fromUtf8("btn_minus"));
        btn_minus->setGeometry(QRect(240, 120, 71, 32));
        btn_mtpl = new QPushButton(Widget);
        btn_mtpl->setObjectName(QString::fromUtf8("btn_mtpl"));
        btn_mtpl->setGeometry(QRect(240, 150, 71, 32));
        btn_divide = new QPushButton(Widget);
        btn_divide->setObjectName(QString::fromUtf8("btn_divide"));
        btn_divide->setGeometry(QRect(240, 180, 71, 32));
        pushButton_dot = new QPushButton(Widget);
        pushButton_dot->setObjectName(QString::fromUtf8("pushButton_dot"));
        pushButton_dot->setGeometry(QRect(100, 180, 71, 32));
        display_2 = new QLineEdit(Widget);
        display_2->setObjectName(QString::fromUtf8("display_2"));
        display_2->setGeometry(QRect(10, 50, 321, 31));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        pushButton_1->setText(QCoreApplication::translate("Widget", "1", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Widget", "2", nullptr));
        btn_add->setText(QCoreApplication::translate("Widget", "+", nullptr));
        equal_pushButton->setText(QCoreApplication::translate("Widget", "=", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Widget", "3", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Widget", "4", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Widget", "5", nullptr));
        pushButton_6->setText(QCoreApplication::translate("Widget", "6", nullptr));
        pushButton_7->setText(QCoreApplication::translate("Widget", "7", nullptr));
        pushButton_8->setText(QCoreApplication::translate("Widget", "9", nullptr));
        pushButton_9->setText(QCoreApplication::translate("Widget", "8", nullptr));
        pushButton_0->setText(QCoreApplication::translate("Widget", "0", nullptr));
        btn_minus->setText(QCoreApplication::translate("Widget", "-", nullptr));
        btn_mtpl->setText(QCoreApplication::translate("Widget", "*", nullptr));
        btn_divide->setText(QCoreApplication::translate("Widget", "/", nullptr));
        pushButton_dot->setText(QCoreApplication::translate("Widget", ".", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
