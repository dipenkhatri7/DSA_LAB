#include "ArrayStack.h"
#include <iostream>
using namespace std;

void ArrayStack::push(int data)
{
    if (isFull())
    {
        cout << "Stack Overflow" << endl;
        return;
    }
    Top++;
    arr[Top] = data;
}
int ArrayStack::pop()
{
    if (isEmpty())
    {
        return -1;
    }
    Top--;
    return arr[Top + 1];
}
int ArrayStack::top()
{
    if (isEmpty())
    {
        return -1;
    }
    // cout << "Top element is ";
    return arr[Top];
}
bool ArrayStack::isEmpty()
{
    if (Top == -1)
    {
        return true;
    }
    return false;
}
bool ArrayStack::isFull()
{
    if (Top == total - 1)
    {
        return true;
    }
    return false;
}