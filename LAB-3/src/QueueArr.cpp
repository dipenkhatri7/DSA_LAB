#include "../include/QueueArr.h"
#include <iostream>
using namespace std;

template <class T>
void QueueArr<T>::enqueue(T data)
{
    if (f == -1 && b == -1)
    {
        f = b = 0;
        arr[b] = data;
    }
    else
    {
        b = (b + 1) % total;
        arr[b] = data;
    }
}
template <class T>
T QueueArr<T>::dequeue()
{
    if (f == -1 && b == -1)
    {
        cout << "Queue Underflow";
    }
    if (f == b)
    {
        T temp = arr[f];
        f = b = -1;
        return temp;
    }
    else
    {
        T temp = arr[f];
        f = (f + 1) % total;
        return temp;
    }
}
template <class T>
bool QueueArr<T>::isEmpty()
{
    if (f == -1 && b == -1)
    {
        return true;
    }
    return false;
}
template <class T>
bool QueueArr<T>::isFull()
{
    if (f == (b + 1) % total)
    {
        return true;
    }
    return false;
}
template <class T>
T QueueArr<T>::front()
{
    if (isEmpty())
    {
        return -1;
    }
    return arr[f];
}
template <class T>
T QueueArr<T>::back()
{
    if (isEmpty())
    {
        return -1;
    }
    return arr[b];
}
template <class T>
void QueueArr<T>::display()
{
    int i = f;
    if (isEmpty())
    {
        cout << "Queue is empty";
        return;
    }
    else
    {
        cout << "Queue is: " << endl;
        while (i != b)
        {
            cout << arr[i] << " | ";
            i = (i + 1) % total;
        }
    }
    cout << arr[i];
}
template class QueueArr<int>;