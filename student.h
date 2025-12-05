#include<iostream>
using namespace std;

#ifndef STUDENT_H
int main() {
    
class Student{

    int id;
    string name;
    int age;


public:
    
  Student();
  Student(int i,string n,int a);

  void input();
  void show();
  int getid();
};

#endif