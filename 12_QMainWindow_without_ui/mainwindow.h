#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMenu>
#include <QMenuBar>
#include <QAction>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private:
//    QMenu * fileMenu;
    // 准备构造四个菜单项
    QAction *newAct, *openAct, *saveAct, *saveAsAct;


};
#endif // MAINWINDOW_H
