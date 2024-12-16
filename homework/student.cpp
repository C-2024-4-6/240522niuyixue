#include<iostream>
#include "student.h"
using namespace std;
Student::Student() { ; }
Student::Student(int n, string mz, char s)
{
    this->num = n; this->name = mz; this->sex = s;
}
void Student::set_value(int n, string mz, char s)
{
    this->num = n; this->name = mz; this->sex = s;
}
void Student::display()
{
    cout << "num: " << num << endl;
    cout << "name: " << name << endl;
    cout << "sex: " << sex << endl;
}