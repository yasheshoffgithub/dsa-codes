#include <bits/stdc++.h>
using namespace std;

void print(vector<int> &ans){
    for(auto i:ans) cout<<i<<" ";
    cout<<endl;
    return;
}
void subseq(int i,int n,vector<int> &arr,vector<int> &ans){
    if(i>=n){
        print(ans);
        return;
    }
    ans.push_back(arr[i]);
    subseq(i+1,n,arr,ans);
    ans.pop_back();
    subseq(i+1,n,arr,ans);
}
int main(){;
    vector<int> arr={1,2,3};
    vector<int> ans;
    int n=arr.size();
    subseq(0,n,arr,ans);
    return 0;
}