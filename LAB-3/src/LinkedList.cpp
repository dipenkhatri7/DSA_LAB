#include <iostream>
#include "../include/LinkedList.h"
using namespace std;

// (a) isEmpty(): Returns true if the list is empty, and false otherwise

bool LinkedList::isEmpty()
{
    if (head == NULL)
    {
        return true;
    }
    return false;
}

// (b) addToHead(data): Inserts an element to the beginning of the list

void LinkedList::addToHead(int data)
{
    node *n = new node(data);
    if (isEmpty())
    {
        head = n;
        return;
    }
    n->next = head;
    head = n;
}

// (c) addToTail(data): Inserts an element to the end of the list

void LinkedList::addToTail(int data)
{
    node *n = new node(data);
    if (isEmpty())
    {
        head = n;
        return;
    }
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}

// (d) add(data, predecessor): Inserts an element after the given predecessor node

void LinkedList::add(int data, node *predecessor)
{
    if (isEmpty())
    {
        return;
    }
    node *n = new node(data);
    n->next = predecessor->next;
    predecessor->next = n;
}

// (e) removeFromHead(): Removes the first node in the list

void LinkedList::removeFromHead()
{
    if (isEmpty())
    {
        return;
    }
    node *toDelete = head;
    head = head->next;
    delete toDelete;
}

// (f) remove(data): Removes the node with the given data

void LinkedList::remove(int removeData)
{
    node *temp = head;
    if (isEmpty())
    {
        return;
    }
    if (temp->data == removeData)
    {
        temp = temp->next;
        removeFromHead();
        return;
    }
    while (temp->next != NULL)
    {
        if (temp->next->data == removeData)
        {
            node *toDelete = temp->next;
            temp->next = temp->next->next;
            delete toDelete;
            return;
        }
        temp = temp->next;
    }
    if (temp->next == NULL)
    {
        cout << "The data does not exist" << endl;
    }
}

// (g) retrieve(data, outputNodePointer): Returns the pointer to the node with the requested data

node *LinkedList::retrieve(int data, node *predecessor)
{
    node *temp = head;
    if (isEmpty())
    {
        return NULL;
    }
    while (temp != NULL)
    {
        if (temp->data == data)
        {
            return temp;
        }
        temp = temp->next;
    }
    return NULL;
}

// (h) search(data): Returns true if the data exists in the list, and false otherwise

bool LinkedList::search(int key)
{
    node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == key)
        {
            cout << key << " is found" << endl;
            return true;
        }
        temp = temp->next;
    }
    cout << key << " is not found" << endl;
    return false;
}
// (i) traverse(): Displays the contents of the list

void LinkedList::display()
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " | ";
        temp = temp->next;
    }
}