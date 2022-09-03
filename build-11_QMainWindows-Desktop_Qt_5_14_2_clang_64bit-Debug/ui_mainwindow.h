/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionnew_file;
    QAction *actionopen_project;
    QAction *actionrecently_open;
    QAction *actionsave;
    QAction *actionsave_as;
    QAction *actionclose;
    QAction *actionedit;
    QAction *actionDebug;
    QWidget *centralwidget;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuBUild;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        actionnew_file = new QAction(MainWindow);
        actionnew_file->setObjectName(QString::fromUtf8("actionnew_file"));
        actionopen_project = new QAction(MainWindow);
        actionopen_project->setObjectName(QString::fromUtf8("actionopen_project"));
        actionrecently_open = new QAction(MainWindow);
        actionrecently_open->setObjectName(QString::fromUtf8("actionrecently_open"));
        actionsave = new QAction(MainWindow);
        actionsave->setObjectName(QString::fromUtf8("actionsave"));
        actionsave_as = new QAction(MainWindow);
        actionsave_as->setObjectName(QString::fromUtf8("actionsave_as"));
        actionclose = new QAction(MainWindow);
        actionclose->setObjectName(QString::fromUtf8("actionclose"));
        actionedit = new QAction(MainWindow);
        actionedit->setObjectName(QString::fromUtf8("actionedit"));
        actionDebug = new QAction(MainWindow);
        actionDebug->setObjectName(QString::fromUtf8("actionDebug"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 24));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        menuBUild = new QMenu(menubar);
        menuBUild->setObjectName(QString::fromUtf8("menuBUild"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menubar->addAction(menuBUild->menuAction());
        menuFile->addAction(actionnew_file);
        menuFile->addAction(actionopen_project);
        menuFile->addAction(actionrecently_open);
        menuFile->addAction(actionsave);
        menuFile->addAction(actionsave_as);
        menuFile->addAction(actionclose);
        menuEdit->addAction(actionedit);
        menuBUild->addAction(actionDebug);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionnew_file->setText(QCoreApplication::translate("MainWindow", "new project", nullptr));
        actionopen_project->setText(QCoreApplication::translate("MainWindow", "open project", nullptr));
        actionrecently_open->setText(QCoreApplication::translate("MainWindow", "recently open", nullptr));
        actionsave->setText(QCoreApplication::translate("MainWindow", "save", nullptr));
        actionsave_as->setText(QCoreApplication::translate("MainWindow", "save as", nullptr));
        actionclose->setText(QCoreApplication::translate("MainWindow", "close", nullptr));
        actionedit->setText(QCoreApplication::translate("MainWindow", "edit", nullptr));
        actionDebug->setText(QCoreApplication::translate("MainWindow", "Debug", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuEdit->setTitle(QCoreApplication::translate("MainWindow", "Edit", nullptr));
        menuBUild->setTitle(QCoreApplication::translate("MainWindow", "Build", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
