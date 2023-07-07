#include<iostream>
using namespace std;
char* helper(char input[],int size)
{
   if(input[0]=='\0'||input[1]=='\0')
       return input;
   else
   {
      if(input[0]=='p'&&input[1]=='i')
      {   
          if(size>3)
          for(int i=size;i>=2;i--)
           {
               input[i+2]=input[i];
           }
          if(size==2 || size==3)
          for(int i=size;i>=0;i--)
           {
               input[i+2]=input[i];
           }
       input[0]='3';
       input[1]='.';
       input[2]='1';
       input[3]='4'; 
       helper(input+4,size+1);    
       
      }
       else
           helper(input+1,size-1);
           return input;
   }
   
}
void replacePi(char input[]) 
{   static int size=0;
    for(int i=0;i<10000;i++)
    {
        if(input[i]=='\0')
            break;
        else
            size++;
    }
    helper(input,size);
}
int main(){
     char input[10000];
    cin.getline(input, 10000);
    replacePi(input);
    cout << input << endl; 
    return 0;
}