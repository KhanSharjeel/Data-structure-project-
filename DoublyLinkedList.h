#ifndef DOUBLY_LINKED_LIST_H
#define DOUBLY_LINKED_LIST_H

#include "Student.h"

class DNode {
public:
    Student data;
    DNode* next;
    DNode* prev;

    DNode(Student s);
};

class DoublyLinkedList {
public:
    DNode* head;

    DoublyLinkedList();
    void insert(Student s);
    void displayForward();
    void displayBackward();
};

#endif
