#ifndef queue_h
#define queue_h
#define total 10
#include <iostream>
template <class T>
class Que
{
public:
   int count;
   Que()
   {
      count = 0;
   }
   virtual void enqueue(T) = 0;
   virtual T dequeue() = 0;
   virtual T front() = 0;
   virtual T back() = 0;
   virtual bool isFull() = 0;
   virtual bool isEmpty() = 0;
   virtual void display() = 0;
   virtual ~Que(){};
};

#endif