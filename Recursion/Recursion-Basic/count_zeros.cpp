#include<iostream>
using namespace std;
int countZeros(int n) {
    // Write your code here
    static int ct=0;
    if(n==0){
        return 1;
    }
    int r=n%10;
    n=n/10;
    if(r==0){
        ct++;
    }
    countZeros(n);
    return ct;
}
int main(){
     int n;
    cin >> n;
    cout << countZeros(n) << endl;
    return 0;
}