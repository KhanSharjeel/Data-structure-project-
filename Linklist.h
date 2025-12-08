#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "Student.h"

class Node {
public:
    Student data;
    Node* next;

    Node(Student s);
};

class LinkedList {
public:
    Node* head;

    LinkedList();
    void insert(Student s);
    void display()
};

#endif