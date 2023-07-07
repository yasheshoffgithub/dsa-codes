#include <climits>
#include <iostream>
using namespace std;
class stackusingarray
{
private:
    /* data */
    int *data;
    int nextindex;
    int capacity;

public:
    stackusingarray(int totalsize)
    {
        data = new int[totalsize];
        nextindex = 0;
    }
    int size()
    {
        return nextindex;
    }
    bool isEmpty()
    {
        return (nextindex == 0);
    }
    void push(int element)
    {
        if (nextindex == capacity)
        {
            cout << "Stack full" << endl;
            return;
        }
        data[nextindex] = element;
        nextindex++;
    }
    int pop()
    {
        if (isEmpty)
            cout << "Stack Empty" << endl;
        return INT_MIN;
        nextindex--;
        return data[nextindex];
    }
    int top()
    {
        if (isEmpty)
        {
            cout << "stack is empty" << endl;
            return INT_MIN;
        }
        return data[nextindex - 1];
    }
};
