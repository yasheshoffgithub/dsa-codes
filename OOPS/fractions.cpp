#include <iostream>
#include <math.h>
using namespace std;
#include "frac_class.cpp"
int main()
{
    Fraction f1(10, 2);
    Fraction f2(15, 4);
    f1.print();
    f2.print();
    f1.add(f2);
    f1.print();
    return 0;
}