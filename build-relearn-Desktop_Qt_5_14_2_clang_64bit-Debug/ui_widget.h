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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QPushButton *testQDebug;
    QLabel *label;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit_1;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btm_comfirm;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lineEdit_2;
    QSpacerItem *horizontalSpacer;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QListWidget *list_1;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEdit_3;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *btn_add;
    QSpacerItem *verticalSpacer;
    QLabel *label_list;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(713, 450);
        testQDebug = new QPushButton(Widget);
        testQDebug->setObjectName(QString::fromUtf8("testQDebug"));
        testQDebug->setGeometry(QRect(520, 50, 113, 32));
        label = new QLabel(Widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 10, 271, 31));
        verticalLayoutWidget = new QWidget(Widget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(60, 40, 371, 171));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lineEdit_1 = new QLineEdit(verticalLayoutWidget);
        lineEdit_1->setObjectName(QString::fromUtf8("lineEdit_1"));

        horizontalLayout->addWidget(lineEdit_1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        btm_comfirm = new QPushButton(verticalLayoutWidget);
        btm_comfirm->setObjectName(QString::fromUtf8("btm_comfirm"));

        verticalLayout->addWidget(btm_comfirm);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        lineEdit_2 = new QLineEdit(verticalLayoutWidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        horizontalLayout_2->addWidget(lineEdit_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayoutWidget_3 = new QWidget(Widget);
        horizontalLayoutWidget_3->setObjectName(QString::fromUtf8("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(60, 230, 371, 171));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        list_1 = new QListWidget(horizontalLayoutWidget_3);
        list_1->setObjectName(QString::fromUtf8("list_1"));

        horizontalLayout_3->addWidget(list_1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        lineEdit_3 = new QLineEdit(horizontalLayoutWidget_3);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        verticalLayout_2->addWidget(lineEdit_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        btn_add = new QPushButton(horizontalLayoutWidget_3);
        btn_add->setObjectName(QString::fromUtf8("btn_add"));

        horizontalLayout_4->addWidget(btn_add);


        verticalLayout_2->addLayout(horizontalLayout_4);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Preferred);

        verticalLayout_2->addItem(verticalSpacer);

        label_list = new QLabel(horizontalLayoutWidget_3);
        label_list->setObjectName(QString::fromUtf8("label_list"));

        verticalLayout_2->addWidget(label_list);


        horizontalLayout_3->addLayout(verticalLayout_2);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        testQDebug->setText(QCoreApplication::translate("Widget", "Test QDebug", nullptr));
        label->setText(QCoreApplication::translate("Widget", "\347\202\271\345\207\273 Comfirm \346\212\212\347\254\254\344\270\200\350\241\214\347\232\204\346\226\207\345\255\227\345\244\215\345\210\266\345\210\260\347\254\254\344\272\214\350\241\214", nullptr));
        btm_comfirm->setText(QCoreApplication::translate("Widget", "Comfirm", nullptr));
        btn_add->setText(QCoreApplication::translate("Widget", "Add", nullptr));
        label_list->setText(QCoreApplication::translate("Widget", " 69", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
