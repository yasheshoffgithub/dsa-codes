#include<iostream>
#include <math.h>
using namespace std;

int stringToNumber(char input[]) {
    // Write your code here
    static int x=0;  
    int size=0;
    for(int i=0;i<50;i++)
        if(input[i]=='\0')
            break;
        else
            size++;
    if(size==0)
        return x;
    //int k = size;
    for(int i=0;i<size;i++){
        x+=(input[i]-48)*pow(10,size-1);
        //k--;
        return stringToNumber(input+1);   
    }
    // return x;
}
int main(){
     char input[50];
    cin >> input;
    cout << stringToNumber(input) << endl;
    return 0;
}