#include <iostream>
using namespace std;
#include "class.cpp"
int main()
{
    student s1;          // const 1 called
    student s2(101);     // const 2 called
    student s3(20, 102); // const 3 called
    student s4(s3);      // copy const called
    student s5 = s4;     // copy constructor is called

    return 0;
}