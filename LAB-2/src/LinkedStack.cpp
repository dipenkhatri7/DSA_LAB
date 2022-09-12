#include "LinkedStack.h"
#include<iostream>
using namespace std;

void LinkedStack::push(int data){
    L.addToHead(data);
    count++;
}
int LinkedStack::pop(){
    if(!isEmpty()){
        node *n= L.head;
        L.removeFromHead();
        count--;
        return n->data;
    }
    return -1;
}
int LinkedStack::top(){
    if(!isEmpty()){
        return L.head->data;
    }
    return -1;
}
bool LinkedStack::isEmpty(){
    if(L.head==NULL){
        return true;
    }
    return false;
}
bool LinkedStack::isFull(){
    if(count==total){
        return true;
    }
    return false;
}
