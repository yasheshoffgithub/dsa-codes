#include<iostream>
using namespace std;
int firstIndex(int input[], int size, int x) {
int ans;
  if(size==0){return -1;}  
  if(input[0]==x){
      return 0;
  }
  else{
      ans=firstIndex(input+1,size-1,x);
    
  }
  if(ans<0){
     return ans;
     }
  else {
      return ans+1;}
}

int main(){
        int n;
    cin >> n;
  
    int *input = new int[n];
    
    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }
    
    int x;
    
    cin >> x;
    
    cout << firstIndex(input, n, x) << endl;

    return 0;
}