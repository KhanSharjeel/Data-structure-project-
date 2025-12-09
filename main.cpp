#include <iostream>
#include "Student.h"
#include "LinkList.h"
#include "DoublyLinkedList.h"
#include "BST.h"

using namespace std;

int main() {
    LinkedList list;
    DoublyLinkedList dlist;
    BST tree;

    int choice;

    while (true) {
        cout << "\n1. Add Student\n2. Display Linked List\n3. Display Doubly Linked List\n4. Display BST (In-order)\n5. Exit\n";
        cin >> choice;

        if (choice == 1) {
            Student s;
            s.input();

            list.insert(s);
            dlist.insert(s);
            tree.insertStudent(s);

            cout << "Student Added!\n";
        }

        else if (choice == 2) {
            list.display();
        }

        else if (choice == 3) {
            dlist.displayForward();
        }

        else if (choice == 4) {
            tree.inOrder(tree.root);
        }

        else if (choice == 5) {
            break;
        }

        else {
            cout << "Invalid choice!\n";
        }
    }

    return 0;
}
