#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMenu>
#include <QMenuBar>
#include <QAction>
#include <QToolBar>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QDockWidget>
#include <QTextEdit>
#include <QStatusBar>
#include <QString>


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private:
//    QMenu * fileMenu;
    // 准备构造四个菜单项
    QAction *newAct, *openAct, *saveAct, *saveAsAct, *closeAct;
    QPushButton *btn;
    QLineEdit *edt;

};
#endif // MAINWINDOW_H
