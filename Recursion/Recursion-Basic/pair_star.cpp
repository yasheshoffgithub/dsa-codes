#include<iostream>
using namespace std;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              
int size(char input[])
{   int size=0;
    for(int i=0;i<100;i++)
    {
        if(input[i]=='\0')
            break;
        else
            size++;
    }
 return size;
}
void pairStar(char input[]) {
    if(input[0]=='\0'|| input[1]=='\0')
        return;
     if(input[0]!=input[1])
       pairStar(input+1);
    else
    {  
      int s=size(input);
      for(int i=s;i>=1;i--)
          input[i+1]=input[i];
      input[1]='*';
      pairStar(input+2);  
    }
}
int main(){
     char input[100];
   cin.getline(input, 100);
   pairStar(input);
   cout << input << endl;
   return 0;
}