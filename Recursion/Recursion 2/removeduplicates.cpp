#include<iostream>
using namespace std;
void removeConsecutiveDuplicates(char *input) {
    if(input[0]=='\0' || input[1]=='\0')
        return;
    int n=0;
    for(int i=0;input[i]==input[i+1];i++)
        n++;
    if(n>0)
    {
        for(int i=0;input[i]!='\0';i++)
            input[i+1]=input[i+n+1];
        removeConsecutiveDuplicates(input+1);
    }
    removeConsecutiveDuplicates(input+1);
}
int main(){    
    char s[100000];
    cin >> s;
    removeConsecutiveDuplicates(s);
    cout << s << endl;
    return 0;
}