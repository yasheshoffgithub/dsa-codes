#include<iostream>
using namespace std;
int count(int n){
    if(n<10){
        return 1;
    }
    n=n/10;
    int sum=1+count(n);
    return sum;
    //we can also use static int and then caculate the no of digits.
}
int main(){
    int n;
    cin >> n;
  
    cout << count(n) << endl;
    
    return 0;
}