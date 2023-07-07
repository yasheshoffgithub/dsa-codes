#include<iostream>
using namespace std;
int sumOfDigits(int n) {
    // Write your code here
    static int ct=0;
    if(n==0)
       return ct;
    else{
        int r=n%10;
        n=n/10;
        ct+=r;
        sumOfDigits(n);
    } 
    return ct;
}
int main(){
     int n;
   cin >> n;
   cout << sumOfDigits(n) << endl;
    return 0;
}