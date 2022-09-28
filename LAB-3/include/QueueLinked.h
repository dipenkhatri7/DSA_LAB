#ifndef QueueLinked_h
#define QueueLinked_h
#include "Queue.h"
#include "LinkedList.h"
template <class T>
class QueueLinked : public LinkedList, public Que<int>
{
public:
    LinkedList L;
    // node *f = NULL;
    // node *r = NULL;
    QueueLinked() {}
    void enqueue(T);
    T dequeue();
    T front();
    T back();
    bool isFull();
    bool isEmpty();
    void display();
    ~QueueLinked() {}
};
#endif