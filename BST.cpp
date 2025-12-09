#include "BST.h"
#include <iostream>
using namespace std;

BNode::BNode(Student s) {
    data = s;
    left = NULL;
    right = NULL;
}

BST::BST() {
    root = NULL;
}

BNode* BST::insert(BNode* r, Student s) {
    if (r == NULL) {
        BNode* n = new BNode(s);
        return n;
    }

    if (s.id < r->data.id)
        r->left = insert(r->left, s);
    else
        r->right = insert(r->right, s);

    return r;
}

void BST::insertStudent(Student s) {
    root = insert(root, s);
}

void BST::inOrder(BNode* r) {
    if (r != NULL) {
        inOrder(r->left);
        r->data.display();
        inOrder(r->right);
    }
}
