#include "../include/QueueLinked.h"
#include <iostream>
using namespace std;
template <class T>
void QueueLinked<T>::enqueue(T data)
{
    L.addToTail(data);
    count++;
}
template <class T>

T QueueLinked<T>::dequeue()
{
    if (!isEmpty())
    {
        node *n = L.head;
        L.removeFromHead();
        count--;
        return n->data;
    }
    return -1;
}
template <class T>

T QueueLinked<T>::front()
{
    if (L.isEmpty())
    {
        return -1;
    }
    return L.head->data;
}
template <class T>

T QueueLinked<T>::back()
{
    if (L.isEmpty())
    {
        return -1;
    }
    node *temp = L.head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    return temp->data;
}
template <class T>

bool QueueLinked<T>::isEmpty()
{
    if (L.head == NULL)
    {
        return true;
    }
    return false;
}
template <class T>

bool QueueLinked<T>::isFull()
{
    if (count == total)
    {
        return true;
    }
    return false;
}
template <class T>

void QueueLinked<T>::display()
{
    L.display();
}
template class QueueLinked<int>;
