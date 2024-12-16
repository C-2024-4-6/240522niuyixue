#ifndef STUDENT_H
#define STUDENT_H
#include<string>
class Student
{
public:
    Student();
    Student(int,std::string, char);
    void display();
    void set_value(int,std::string, char);
private:
    int num; std::string name; char sex;
};
#endif