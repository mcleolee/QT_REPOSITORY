#include "widget.h"
// #include "ui_widget.h"
#include "MyHeader.h"

int testDebug()
{

    // qt 中所有类库提供的类名或头文件，都是大写字母开头
    // qt 中所有接口函数，都是小写字母开头

    // qDebug(): 函数内部构造类一个默认的输出流对象

    qDebug();
    qDebug() << "123" << "hello world lmao" << 123;
    qDebug("123");
    QString str = QString("123") + QString("qwe");
    qDebug() << str;
    // qDebug() 格式化输出
    qDebug("%d",69);
    int a=69, b=96;
    qDebug() << a+b;
    qDebug("%d + %d = %d",a,b,a+b);
    return 0;
}
