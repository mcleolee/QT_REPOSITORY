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

    // 构造子菜单
    QMenu *childMenu = new QMenu("recently files");
    childMenu->addAction("1......");
    childMenu->addAction("2......");
    childMenu->addAction("newAct");
    childMenu->addAction("openAct");



    // 向菜单文件中添加子菜单
    fileMenu->addMenu(childMenu);

    // 向文件菜单中添加菜单项，并且指定菜单项信号被触发时，调用哪个槽函数做事情
    fileMenu->addAction("exit", this, &MainWindow::close);

    // *********************添加工具栏，并给工具栏添加工具********************* //
    QToolBar *tool1 = addToolBar ("file");

    // 设置工具栏的位置区域：左边区域
    tool1->setAllowedAreas(Qt::LeftToolBarArea);

    // 向工具栏中添加工具
    tool1->addAction(newAct);
    tool1->addAction(openAct);
    tool1->addAction(saveAct);
    tool1->addAction(saveAsAct);
    tool1->addAction(closeAct);

    QToolBar *tool2 = addToolBar("edit");
    // addWidget 向工具栏添加控件
    tool2->addWidget(new QLabel("Jump to:"));
    edt = new QLineEdit;
    tool2->addWidget(edt);
    btn = new QPushButton("Jump");
    tool2->addWidget(btn);

}

MainWindow::~MainWindow()
{
}

