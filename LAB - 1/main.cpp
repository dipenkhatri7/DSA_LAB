
#include "./include/LinkedList.h"
#include <iostream>
using namespace std;
int main()
{
    cout << "Choose one of the following options: " << endl;
    cout << "1. isEmpty(): Returns true if the list is empty, and false otherwise" << endl;
    cout << "2. addToHead(data): Inserts an element to the beginning of the list" << endl;
    cout << "3. addToTail(data): Inserts an element to the end of the list" << endl;
    cout << "4. add(data, predecessor): Inserts an element after the given predecessor node" << endl;
    cout << "5. removeFromHead(): Removes the first node in the list" << endl;
    cout << "6. remove(data): Removes the node with the given data" << endl;
    cout << "7. retrieve(data, outputNodePointer): Returns the pointer to the node with the requested data" << endl;
    cout << "8. search(data): Returns true if the data exists in the list, and false otherwise" << endl;
    cout << "9. traverse(): Displays the contents of the list" << endl;
    cout << "10. exit" << endl;
    int choice;
    LinkedList l;
    while (choice != 10)
    {
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            l.isEmpty();
            break;
        case 2:
            int data;
            cout << "Enter the data: ";
            cin >> data;
            l.addToHead(data);
            break;
        case 3:
            int data1;
            cout << "Enter the data: ";
            cin >> data1;
            l.addToTail(data1);
            break;
        case 4:
            int data2, data3;
            cout << "Enter the data: ";
            cin >> data2;
            cout << "Enter the predecessor: ";
            cin >> data3;
            l.add(data2, data3);
            break;
        case 5:
            l.removeFromHead();
            break;
        case 6:
            int data4;
            cout << "Enter the data: ";
            cin >> data4;
            l.remove(data4);
            break;
        case 7:
            int data5;
            cout << "Enter the data: ";
            cin >> data5;
            if (l.retrieve(data5) != NULL)
            {
                cout << "The node with data " << data5 << " have nodePointer: " << l.retrieve(data5) << endl;
            }
            else
            {
                cout << "The node with data " << data5 << " does not exist" << endl;
            }
            break;
        case 8:
            int data6;
            cout << "Enter the data: ";
            cin >> data6;
            l.search(data6);
            break;
        case 9:
            l.display();
            break;
        case 10:
            cout << "Thank you for using the program" << endl;
            break;
        default:
            cout << "Invalid choice" << endl;
            break;
        }
    }
}