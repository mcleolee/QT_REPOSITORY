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
    // 构造带图标的菜单栏
    newAct      = new QAction(QIcon(":/pic_temp/newfile.png"),"new file or project");
    openAct     = new QAction(QIcon(":/pic_temp/openfile.png"),"open file or project");
    saveAct     = new QAction(QIcon(":/pic_temp/savefile.png"),"save");
    saveAsAct   = new QAction(QIcon(":/pic_temp/saveasfile.png"),"save as");
    closeAct    = new QAction(QIcon(":/pic_temp/closefile.png"),"close");

    // 设置莱单项的快捷方式，使用标准按键，构造匿名的快捷键
    newAct->setShortcut(QKeySequence(Qt::CTRL + Qt::Key_N));
    openAct->setShortcut(QKeySequence("ctrl+o"));
    saveAct->setShortcut(QKeySequence("ctrl+s"));
    saveAsAct->setShortcut(QKeySequence("ctrl+shift+a"));
    closeAct->setShortcut(QKeySequence("ctrl+w"));

    // 向菜单中添加菜单项
    fileMenu->addAction(newAct);
    fileMenu->addAction(openAct);
    fileMenu->addAction(saveAct);
    fileMenu->addAction(saveAsAct);
    fileMenu->addAction(closeAct);


}

MainWindow::~MainWindow()
{
}

