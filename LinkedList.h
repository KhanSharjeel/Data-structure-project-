#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "Student.h"

struct Node {
    Student data;
    Node* next;

    Node(Student s) {
        data = s;
        next = nullptr;
    }
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList();
    void insert(Student s);
    void display();
};

#endif
