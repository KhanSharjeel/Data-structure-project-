#include "LinkedList.h"
#include <iostream>
using namespace std;

LinkedList::LinkedList() {
    head = nullptr;
}

void LinkedList::insert(Student s) {
    Node* newNode = new Node(s);

    if (head == nullptr) {
        head = newNode;
    } else {
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void LinkedList::display() {
    Node* temp = head;
    while (temp != nullptr) {
        temp->data.display();
        temp = temp->next;
    }
}
