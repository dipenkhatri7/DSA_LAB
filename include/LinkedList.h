#ifndef LinkedList_h
#define LinkedList_h
#include <iostream>
class node
{
public:
    int data;
    node *next;
    node(int a)
    {
        data = a;
        next = NULL;
    }
};
class LinkedList
{
private:
    node *head;

public:
    LinkedList()
    {
        head = NULL;
    }
    bool isEmpty();
    void addToHead(int);
    void addToTail(int);
    void add(int, int);
    void removeFromHead();
    void remove(int);
    node *retrieve(int);
    bool search(int);
    void display();
};
#endif