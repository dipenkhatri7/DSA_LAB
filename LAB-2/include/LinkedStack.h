#ifndef LinkedStack_h
#define LinkedStack_h
#include "Stack.h"
#include "LinkedList.h"
class LinkedStack : public LinkedList, public Stack
{
public:
    int count;
    LinkedList L;
    LinkedStack(){}
    void push(int);
    int pop();
    int top();
    bool isEmpty();
    bool isFull();
};
#endif