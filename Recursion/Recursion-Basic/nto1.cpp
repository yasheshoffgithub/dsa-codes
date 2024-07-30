#include <bits/stdc++.h>
using namespace std;

void print(int i,int n){
    if(i>n){
        return;
    } 
    print(i+1,n);
    cout<<i<<endl;
}
int main(){
    int n=10;
    print(1,n);
    return 0;
}