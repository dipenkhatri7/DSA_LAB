#ifndef ArrayStack_h
#define ArrayStack_h
#include "Stack.h"
#include <iostream>
class ArrayStack : public Stack
{
    int *arr;
    int Top;

public:
    ArrayStack()
    {
        arr = new int[total];
        Top = -1;
    }
    void push(int);
    int pop();
    int top();
    bool isEmpty();
    bool isFull();
};
#endif