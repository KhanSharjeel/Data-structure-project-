#include <iostream>
#include "Student.h"
#include "LinkedList.h"
#include "DoublyLinkedList.h"
#include "DoublyLinkedList.h"
#include "BST.h" 

using namespace std;

void showMenu() {
    cout << "\n===== Student Management System =====\n";
    cout << "1. Add New Student\n";
    cout << "2. View Students (Original Order)\n";      // Linked List
    cout << "3. View Students (Reverse Order)\n";       // Doubly Linked List
    cout << "4. View Students (Sorted by Roll No)\n";   // BST In-order
    cout << "5. Exit\n";
    cout << "Enter your choice: ";
}

int main() {
    LinkedList list;      // Singly LL
    DoublyLinkedList dlist;     // Doubly LL
    BST tree;             // Binary Search Tree

    int choice;

    while (true) {
        showMenu();
        cin >> choice;

        if (choice == 1) {
            Student s;
            s.input();

            list.insert(s);  // Original order
            dlist.insert(s);      // Reverse order list
            tree.insertStudent(s);       // BST sorted
        }
        else if (choice == 2) {
            cout << "\n--- Students (Original Order) ---\n";
            list.display();
        }
        else if (choice == 3) {
            cout << "\n--- Students (Reverse Order - displayed backward) ---\n";
            dlist.displayBackward();
        }
        else if (choice == 4) {
            cout << "\n--- Students (Sorted by Roll No) ---\n";
            tree.inOrder(tree.root);
        }
        else if (choice == 5) {
            cout << "Exiting...\n";
            break;
        }
        else {
            cout << "Invalid choice! Try again.\n";
        }
    }

    return 0;
}
