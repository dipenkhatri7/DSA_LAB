#include <iostream>
#include "./include/QueueArr.h"
#include "./include/QueueLinked.h"
using namespace std;
void operations()
{
    cout << "Choose one of the following choice: " << endl;
    cout << "1. enqueue(element): Adds an element into the queue" << endl;
    cout << "2. dequeue(): Removes an element from the queue" << endl;
    cout << "3. isEmpty(): Checks if the queue is empty" << endl;
    cout << "4. isFull(): Checks if the queue is full" << endl;
    cout << "5. front(): Gives the element at the front" << endl;
    cout << "6. back(): Gives the element at the rear" << endl;
    cout << "7. display(): Display all the element of the Queue " << endl;
    cout << "8. Exit" << endl;
}
int main()
{
    cout << "Choose one of the following options: " << endl;
    cout << "1. Queue data Structure using an array" << endl;
    cout << "2. Queue data Structure using linked list" << endl;
    cout << "Enter your option: ";
    int choice;
    cin >> choice;
    if (choice == 1)
    {
        operations();
        int option, element;
        cout << "Enter your choice: ";
        cin >> option;
        QueueArr<int> A;
        while (option != 8)
        {
            switch (option)
            {
            case 1:
                cout << "Enter the element: ";
                cin >> element;
                if (!A.isFull())
                {
                    A.enqueue(element);
                    cout << "Element addeed to the queue is: " << element << endl;
                }
                else
                {
                    cout << "Queue Overflow" << endl;
                }
                break;
            case 2:
                if (!A.isEmpty())
                {

                    cout << "Element dequeued at the front of the queue is: " << A.dequeue() << endl;
                }
                else
                {
                    cout << "Queue Underflow" << endl;
                }
                break;
            case 3:
                if (A.isEmpty())
                {
                    cout << "Queue is empty" << endl;
                }
                else
                {
                    cout << "Queue is not empty" << endl;
                }
                break;
            case 4:
                if (A.isFull())
                {
                    cout << "Queue is full" << endl;
                }
                else
                {
                    cout << "Queue is not full" << endl;
                }
                break;
            case 5:
                if (A.front() == -1)
                {
                    cout << "Queue is empty" << endl;
                }
                else
                {
                    cout << "Element at the front of the queue is: " << A.front() << endl;
                }
                break;
            case 6:
                if (A.back() == -1)
                {

                    cout << "Queue is empty" << endl;
                }
                else
                {

                    cout << "Element at the rear of the queue is: " << A.back() << endl;
                }
                break;
            case 7:
                A.display();
                cout << endl;
                break;
            default:
                cout << "Invalid choice" << endl;
            }
            cout << "Enter your choice: ";
            cin >> option;
        }
    }
    else if (choice == 2)
    {
        operations();
        int option, element;
        cout << "Enter your choice: ";
        cin >> option;
        QueueLinked<int> L;
        while (option != 8)
        {
            switch (option)
            {
            case 1:
                cout << "Enter the element: ";
                cin >> element;
                if (!L.isFull())
                {
                    L.enqueue(element);
                    cout << "Element addeed to the queue is: " << element << endl;
                }
                else
                {
                    cout << "Queue Overflow" << endl;
                }
                break;
            case 2:
                if (!L.isEmpty())
                {

                    cout << "Element dequeued at the front of the queue is: " << L.dequeue() << endl;
                }
                else
                {
                    cout << "Queue Underflow" << endl;
                }
                break;
            case 3:
                if (L.isEmpty())
                {
                    cout << "Queue is empty" << endl;
                }
                else
                {
                    cout << "Queue is not empty" << endl;
                }
                break;
            case 4:
                if (L.isFull())
                {
                    cout << "Queue is full" << endl;
                }
                else
                {
                    cout << "Queue is not full" << endl;
                }
                break;
            case 5:
                if (L.front() == -1)
                {
                    cout << "Queue is empty" << endl;
                }
                else
                {
                    cout << "Element at the front of the queue is: " << L.front() << endl;
                }
                break;
            case 6:
                if (L.back() == -1)
                {
                    cout << "Queue is empty" << endl;
                }
                else
                {
                    cout << "Element at the rear of the queue is: " << L.back() << endl;
                }
                break;
            case 7:
                L.display();
                cout << endl;
                break;
            default:
                cout << "Invalid choice" << endl;
            }
            cout << "Enter your choice: ";
            cin >> option;
        }
    }
    else
    {
        cout << "Invalid choice" << endl;
    }
    return 0;
}
