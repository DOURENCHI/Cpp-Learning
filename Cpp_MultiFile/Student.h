#ifndef STUDENT_H
#define STUDENT_H

#include <string>

class Student
{
private:
    std::string name;
    int age;

public:
    Student(std::string studentName, int studentAge);

    void printInfo();
};

#endif