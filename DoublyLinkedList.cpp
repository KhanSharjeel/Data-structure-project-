#include "DoublyLinkedList.h"
#include <iostream>
using namespace std;

DNode::DNode(Student s) {
    data = s;
    next = NULL;
    prev = NULL;
}

DoublyLinkedList::DoublyLinkedList() {
    head = NULL;
}

void DoublyLinkedList::insert(Student s) {
    DNode* n = new DNode(s);
    if (head == NULL) {
        head = n;
    } else {
        DNode* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = n;
        n->prev = temp;
    }
}

void DoublyLinkedList::displayForward() {
    DNode* temp = head;
    while (temp != NULL) {
        temp->data.display();
        temp = temp->next;
    }
}

void DoublyLinkedList::displayBackward() {
    DNode* temp = head;

    if (temp == NULL) return;

    while (temp->next != NULL)
        temp = temp->next;

    while (temp != NULL) {
        temp->data.display();
        temp = temp->prev;
        cout<<temp->data.name<<endl;
    }
}