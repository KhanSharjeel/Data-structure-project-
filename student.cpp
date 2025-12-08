#include "Student.h"
#include <iostream>
using namespace std;

Student Student() {
    id = 0;
    name = "";
    age = 0;
}

Student Student(int i, string n, int a) {
    id = i;
    name = n;
    age = a;
}


void Student::input() {
    cout << "Enter ID: ";
    cin >> id;
    cin.ignore();
    cout << "Enter Name: ";
    getline(cin, name);
    cout << "Enter Age: ";
    cin >> age;
}

void Student::display() {
    cout << "ID: " << id << ", Name: " << name << ", Age: " << age << endl;
}
