#include "LinkedStack.h"
#include "ArrayStack.h"
#include <iostream>
using namespace std;
void operations()
{
    cout << "Choose one of the following choice: " << endl;
    cout << "1. push(element): Adds an element into the stack" << endl;
    cout << "2. pop(): Removes an element from the stack" << endl;
    cout << "3. isEmpty(): Checks if the stack is empty" << endl;
    cout << "4. isFull(): Checks if the stack is full" << endl;
    cout << "5. top(): Gives the element at the top" << endl;
    cout << "6. exit " << endl;
}
int main()
{
    cout << "Choose one of the following options: " << endl;
    cout << "1. Array Stack" << endl;
    cout << "2. Linked Stack" << endl;
    cout << "Enter your option: ";
    int choice;
    cin >> choice;
    if (choice == 1)
    {
        operations();
        int option, element;
        cout << "Enter your choice: ";
        cin >> option;
        ArrayStack A;
        while (option != 6)
        {
            switch (option)
            {
            case 1:
                cout << "Enter the element: ";
                cin >> element;
                A.push(element);
                cout << "Pushed element is " << element << endl;
                break;
            case 2:
                cout << "Element popped from the stack is " << A.pop() << endl;
                break;
            case 3:
                if (A.isEmpty())
                {
                    cout << "Stack is empty" << endl;
                }
                else
                {
                    cout << "Stack is not empty" << endl;
                }
                break;
            case 4:
                if (A.isFull())
                {
                    cout << "Stack is full" << endl;
                }
                else
                {
                    cout << "Stack is not full" << endl;
                }
                break;
            case 5:
                if (A.top() == -1)
                {
                    cout << "Stack Underflow" << endl;
                }
                else
                {
                    cout << "Top element is " << A.top() << endl;
                }
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
        LinkedStack L;
        while (option != 6)
        {
            switch (option)
            {
            case 1:
                cout << "Enter the element: ";
                cin >> element;
                L.push(element);
                cout << "Element " << element << " pushed into the stack" << endl;
                break;
            case 2:
                cout << "Element popped from the stack is " << L.pop() << endl;
                break;
            case 3:
                if (L.isEmpty())
                {
                    cout << "Stack is empty" << endl;
                }
                else
                {
                    cout << "Stack is not empty" << endl;
                }
                break;
            case 4:
                if (L.isFull())
                {
                    cout << "Stack is full" << endl;
                }
                else
                {
                    cout << "Stack is not full" << endl;
                }
                break;
            case 5:
                cout << "Top element is " << L.top() << endl;
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
