#ifndef BST_H
#define BST_H

#include "Student.h"

class BNode {
public:
    Student data;
    BNode* left;
    BNode* right;

    BNode(Student s);
};

class BST {
public:
    BNode* root;

    BST();
    BNode* insert(BNode* r, Student s);
    void insertStudent(Student s);
    void inOrder(BNode* r);
};

#endif