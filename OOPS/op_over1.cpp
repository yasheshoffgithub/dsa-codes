#include<iostream>
using namespace std;
#include "frac_class.cpp"
int main(){
    Fraction f1(10, 2);
    Fraction f2(15, 4);
    Fraction f3 = f1 + f2;
    f1.print();
    f2.print();
    //f1.add(f2);
    //f1.print();
    f3.print();

    return 0;
}