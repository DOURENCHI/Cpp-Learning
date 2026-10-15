#include <iostream>
#include "Student.h"

Student::Student(std::string studentName, int studentAge)
    : name(studentName), age(studentAge)
{
}

void Student::printInfo()
{
    std::cout << "姓名：" << name << std::endl;
    std::cout << "年龄：" << age << std::endl;
}