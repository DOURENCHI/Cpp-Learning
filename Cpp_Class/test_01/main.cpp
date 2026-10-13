#include <iostream>
#include <string>

class Student
{
private:
    std::string name;
    double score;

public:
    Student(std::string studentName, double studentScore)
        : name(studentName), score(studentScore)
    {
    }

    void printInfo()
    {
        std::cout << "姓名：" << name << std::endl;
        std::cout << "成绩：" << score << std::endl;
    }
};

int main()
{
    Student student1("张三", 90.5);

    student1.printInfo();

    return 0;
}