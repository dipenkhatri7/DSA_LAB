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

public:
    node *head;
    LinkedList()
    {
        head = NULL;
    }
    bool isEmpty();
    void addToHead(int);
    void addToTail(int);
    void add(int, node *);
    void removeFromHead();
    void remove(int);
    node *retrieve(int, node*);
    bool search(int);
    void display();
};
#endif