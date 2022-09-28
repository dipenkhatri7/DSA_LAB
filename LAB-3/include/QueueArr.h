
#ifndef QueueArr_h
#define QueueArr_h
#define total 10
#include <iostream>
#include "Queue.h"
template <class T>
class QueueArr : public Que<int>
{
    T *arr;
    int f;
    int b;

public:
    QueueArr()
    {
        arr = new T[total];
        f = -1;
        b = -1;
    }

    void enqueue(T data);

    T dequeue();

    T front();

    T back();

    bool isFull();

    bool isEmpty();

    void display();
    ~QueueArr() {}
};
#endif