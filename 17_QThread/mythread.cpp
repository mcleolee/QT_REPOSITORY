#include "mythread.h"

MyThread::MyThread()
{

}

void MyThread::run()
{
    while(1)
    {
        if(i >= 100)
            i=0;
        i++;

        emit dataChange(i);
    }
}
