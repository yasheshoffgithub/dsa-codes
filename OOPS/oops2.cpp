#include <iostream>
using namespace std;
 #include "class.cpp"
class student
{
public:
    int rollno;
    int age;
};
int main()
{
    student s1;
    s1.age = 24;
    s1.rollno = 1;
    cout << s1.age;
    student *s3 = new student;
    (*s3).age = 25;

    return 0;
}