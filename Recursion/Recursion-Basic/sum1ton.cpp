#include <bits/stdc++.h>
using namespace std;
//parameterized function
void sum(int n,int ans){
    if(n<1){
        cout<< ans;
        return;
    } 
    sum(n-1,ans+n);
    //return 0;
}
//using functional return statement
int sum(int n){
    if(n==0) return 0;
    return n+sum(n-1);
}
int main(){
    int n=10;
    int ans=0;
    cout<<sum(n)<<endl;
    sum(n,ans);
    return 0;
}