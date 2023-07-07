#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
double geometricSum(int k) 
{
    double sum;
    if(k==-1)
    {
        return 0;
    }
    else
    {
        sum=(geometricSum(k-1));
        sum=1+ (sum/2.0);
    }
    return sum;
}
int main(){
    int k;
    cin >> k;
    cout << fixed << setprecision(5);
    cout << geometricSum(k) << endl;  
    return 0;
}