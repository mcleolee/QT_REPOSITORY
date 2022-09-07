#ifndef MYTHREAD_H
#define MYTHREAD_H

#include <QObject>

class MyThread : public QThread
{
    Q_OBJECT
public:
    MyThread();

    void run();

signals:
    void dataChange(int);

private:
    int i = 0;
};

#endif // MYTHREAD_H
