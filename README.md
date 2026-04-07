# Data-structure-project

✅ 1. Student Class (Base Model Class)

File: Student.h / Student.cpp

Not inherited from anybody

No child classes inherit from it

It is a simple data model

Every data structure stores Student objects

✔ Used by:

BST

Linked List

Doubly Linked List

Stack

Queue

Arrays

🌳 2. Binary Search Tree (BST)

File: BST.h / BST.cpp

Holds nodes like:

struct Node {
    Student data;
    Node* left;
    Node* right;
};

✔ Used For:

Fast searching of students

Sorted display (Inorder Traversal)

Searching by ID

❌ No inheritance

BST is an independent class that uses Student objects.

🔗 3. Singly Linked List

File: LinkedList.h / LinkedList.cpp

Holds:

struct Node {
    Student data;
    Node* next;
};

✔ Used For:

Dynamically adding students

Displaying list

Deleting a record

Updating record

❌ No inheritance

Singly Linked List is also independent.

🔗🔗 4. Doubly Linked List

File: DoublyLinkedList.h / DoublyLinkedList.cpp

Has:

struct DNode {
    Student data;
    DNode* next;
    DNode* prev;
};

✔ Used For:

Fast deletion (because of backward link)

Moving forward/backward through records

Maintaining sorted data if desired

Again:

❌ No inheritance here.
📥 5. Stack (optional)

File: Stack.h / Stack.cpp

Stores latest actions like:

Last deleted student

Last updated record

✔ Used For:

Undo last delete

Undo last update

Data Inside Stack:

Student objects
OR

Strings describing actions

❌ No inheritance

Just an independent class using Student objects.

📤 6. Queue (optional)

File: Queue.h / Queue.cpp

✔ Used For:

Pending student requests

Processing tasks in order

First-come-first-serve storage

Like Stack and List:

❌ No inheritance.
🗃 7. Array Module

File: ArrayStore.h / ArrayStore.cpp

✔ Used For:

Fixed storage

Searching (linear/binary search)

Sorting

🧵 8. Main Program

File: main.cpp

This file:

Creates objects of

BST

LinkedList

DoublyLinkedList

Stack

Queue

Connects menus (Admin / Student)

Calls functions from these structures

✔ Every structure uses Student class
✔ No structure inherits another
✔ Only object-to-object relationships (simple and beginner friendly)

📝 Summary Table
Class / Structure	Inherits From	Stores	Purpose
Student	❌ None	—	Student data model
BST	❌ None	Student	Fast search (ID-based)
LinkedList	❌ None	Student	Add/Delete/Update
DoublyLinkedList	❌ None	Student	Faster deletion + two-way traversal
Stack	❌ None	Student / Actions	Undo actions
Queue	❌ None	Student / Requests	Process in order
Array Module	❌ None	Student	Sorting + searching
