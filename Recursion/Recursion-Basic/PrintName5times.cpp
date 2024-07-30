#include <bits/stdc++.h>
using namespace std;
void print(string &name,int cnt){
    if(cnt==5) return;
    cnt++;
    cout<<name<<endl;
    print(name,cnt);
}
int main(){
    string name="Yashesh";
    print(name,0);
    return 0;
}