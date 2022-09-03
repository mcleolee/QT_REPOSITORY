#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    this->setFixedSize(640,480);
    // *********************向菜单栏中添加菜单********************* //
    // menuBar()：获得窗口默认的菜单栏首地址
    // addMenu()：添加菜单、返回菜单首地址

    QMenu * fileMenu = menuBar()->addMenu("&file");
    menuBar()->addMenu("edit");
    menuBar()->addMenu("build");
    QMenu *toolMenu = menuBar()->addMenu(QIcon(":/1.jpg"),"tool");

    // *********************向菜单栏中添加菜单项******************** //



}

MainWindow::~MainWindow()
{
}

