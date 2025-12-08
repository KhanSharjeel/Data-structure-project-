#ifndef STUDENT_H
#define STUDENT_H

#include <string>
using namespace std;

class Student {
public:
    int id;
    string name;
    int age;

    Student();
    Student(int i, string n, int a);

    void input();
    void display();
};

#endif
