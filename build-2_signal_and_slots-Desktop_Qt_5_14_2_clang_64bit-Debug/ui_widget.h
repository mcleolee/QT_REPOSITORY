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
    QLineEdit *edit_comfirm;
    QPushButton *comfirm_pushButton;
    QLineEdit *edit_delete;
    QPushButton *delete_pushButton_2;
    QLineEdit *edit_3;
    QPushButton *one_pushButton;
    QPushButton *two_pushButton_2;
    QPushButton *add_pushButton;
    QPushButton *equal_pushButton;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(297, 308);
        edit_comfirm = new QLineEdit(Widget);
        edit_comfirm->setObjectName(QString::fromUtf8("edit_comfirm"));
        edit_comfirm->setGeometry(QRect(40, 20, 211, 21));
        comfirm_pushButton = new QPushButton(Widget);
        comfirm_pushButton->setObjectName(QString::fromUtf8("comfirm_pushButton"));
        comfirm_pushButton->setGeometry(QRect(90, 60, 113, 32));
        edit_delete = new QLineEdit(Widget);
        edit_delete->setObjectName(QString::fromUtf8("edit_delete"));
        edit_delete->setGeometry(QRect(40, 110, 211, 21));
        delete_pushButton_2 = new QPushButton(Widget);
        delete_pushButton_2->setObjectName(QString::fromUtf8("delete_pushButton_2"));
        delete_pushButton_2->setGeometry(QRect(90, 150, 113, 32));
        edit_3 = new QLineEdit(Widget);
        edit_3->setObjectName(QString::fromUtf8("edit_3"));
        edit_3->setGeometry(QRect(40, 200, 211, 21));
        one_pushButton = new QPushButton(Widget);
        one_pushButton->setObjectName(QString::fromUtf8("one_pushButton"));
        one_pushButton->setGeometry(QRect(40, 230, 71, 32));
        two_pushButton_2 = new QPushButton(Widget);
        two_pushButton_2->setObjectName(QString::fromUtf8("two_pushButton_2"));
        two_pushButton_2->setGeometry(QRect(110, 230, 71, 32));
        add_pushButton = new QPushButton(Widget);
        add_pushButton->setObjectName(QString::fromUtf8("add_pushButton"));
        add_pushButton->setGeometry(QRect(40, 270, 71, 32));
        equal_pushButton = new QPushButton(Widget);
        equal_pushButton->setObjectName(QString::fromUtf8("equal_pushButton"));
        equal_pushButton->setGeometry(QRect(110, 270, 71, 32));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        edit_comfirm->setText(QString());
        comfirm_pushButton->setText(QCoreApplication::translate("Widget", "Comfirm", nullptr));
        delete_pushButton_2->setText(QCoreApplication::translate("Widget", "Delete", nullptr));
        one_pushButton->setText(QCoreApplication::translate("Widget", "1", nullptr));
        two_pushButton_2->setText(QCoreApplication::translate("Widget", "2", nullptr));
        add_pushButton->setText(QCoreApplication::translate("Widget", "+", nullptr));
        equal_pushButton->setText(QCoreApplication::translate("Widget", "=", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
