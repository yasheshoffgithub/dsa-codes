#include <iostream>
using namespace std;
#include <vector>
int main()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    v[1] = 100;
    // v[5]=9; //may or maynot work-random-so use sqaure brackets to access or update and not insert new element
    v.push_back(60);
    v.push_back(70);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
    return 0;
}