#include<iostream>
using namespace std;
int lengthstr(char s[]){
    if(s[0]=='\0')
      return 0;
    int smallstr= lengthstr(s+1);
    return smallstr+1;  
}
int main(){
    char s[100];
    cin>>s;
    cout<< lengthstr(s);
    //return 0;
}