#include<iostream>
using namespace std;
void merge(int input[],int si,int mid, int ei)
{
    int subarrone= mid-si+1;
    int subarrtwo= ei-mid;
    //create temp arrays
    int *leftarray=new int[subarrone],
        *rightarray=new int[subarrtwo];
    //Copy data to temp array leftarray[] & rightarray[]
    for(int i=0;i<subarrone;i++)
        leftarray[i]=input[si+i];
    for(int j=0;j<subarrtwo;j++)
        rightarray[j]=input[mid+1+j];
    //INitial index of 1st subarray
    int indexofsubarrayone=0;
    //INitial index of 2nd subarray
    int indexofsubarraytwo=0;
    //INitial index of mergedarray
    int indexofmergedarray=si;
    //Merge the temp arrays[si...ei]
    while(indexofsubarrayone<subarrone && indexofsubarraytwo<subarrtwo)
    {
        if(leftarray[indexofsubarrayone]<=rightarray[indexofsubarraytwo])
        {
            input[indexofmergedarray]=leftarray[indexofsubarrayone];
            indexofsubarrayone ++ ;
        }
        else
        {
            input[indexofmergedarray]=rightarray[indexofsubarraytwo];
            indexofsubarraytwo ++ ;
        }
        indexofmergedarray ++ ;    
    } 
    //copy the remaining elements of left array if any
     while(indexofsubarrayone<subarrone)
     {
       input[indexofmergedarray]=leftarray[indexofsubarrayone];
       indexofsubarrayone ++ ; 
       indexofmergedarray ++ ;  
     }
    //copy the remaining elements of right array if any
    while(indexofsubarraytwo<subarrtwo)
     {
       input[indexofmergedarray]=rightarray[indexofsubarraytwo];
       indexofsubarraytwo ++ ; 
       indexofmergedarray ++ ;  
     }
    delete []leftarray;
    delete []rightarray;
}
void Sort(int input[],int si, int ei)
{
     if(si>=ei)
        return;
    int mid=(si+ei)/2 ;
    Sort(input,si,mid);
    Sort(input,mid+1,ei);
    merge(input,si,mid,ei);
}
void mergeSort(int input[], int size)
{
    int si=0;
    int ei=size-1;
    Sort(input,si,ei);
}
int main() {
  int length;
  cin >> length;
  int* input = new int[length];
  for(int i=0; i < length; i++)
    cin >> input[i];
  mergeSort(input, length);
  for(int i = 0; i < length; i++) {
    cout << input[i] << " ";
  }
}