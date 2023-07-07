#include <iostream>
#include "queueclass.cpp"
using namespace std;

int main()
{
    queueusingarray<int> q(5);
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.enqueue(60);

    // similarly we can perform other operations here
    return 0;
}