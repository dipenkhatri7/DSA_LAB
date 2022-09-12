#ifndef Stack_h
#define Stack_h
#include <iostream>
using namespace std;
#define total 10
class Stack
{
public:
    
    Stack() {}
    ~Stack() {}
    virtual void push(int x) = 0;
    virtual int pop() = 0;
    virtual int top() = 0;
    virtual bool isEmpty() = 0;
    virtual bool isFull() = 0;
};
#endif