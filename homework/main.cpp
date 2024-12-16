#include<iostream>
#include"student.h"
int main()
{
    Student stud;
    Student stud1(9007, "tcg", 'm');
    stud.set_value(249, "zkh", 'f');
    stud.display();
    std::cout <<"\n";
    stud1.display();
    return 0;
}