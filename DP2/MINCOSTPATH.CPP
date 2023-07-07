#include <bits/stdc++.h>
using namespace std;

int minCostPath(int **input, int n, int m, int i, int j)//BRUTE FORCE helper
{
    if (i == n - 1 && j == m - 1)
    {
        return input[i][j];
    }
    if (i >= n || j >= m)
    {
        return INT_MAX;
    }

    int x = minCostPath(input, n, m, i + 1, j + 1);
    int y = minCostPath(input, n, m, i + 1, j);
    int z = minCostPath(input, n, m, i, j + 1);

    int ans = min(x, min(y, z)) + input[i][j];
    return ans;
}
int mincostPath_mem(int **input,int n ,int m,int i,int j,int **output){
    if (i == n - 1 && j == m - 1)
    {
        return input[i][j];
    }
    if (i >= n || j >= m)
    {
        return INT_MAX;
    }
    if(output[i][j]!=-1){
        return output[i][j];
    }
    int x = mincostPath_mem(input, n, m, i + 1, j + 1,output);
    int y = mincostPath_mem(input, n, m, i + 1, j,output);
    int z = mincostPath_mem(input, n, m, i, j + 1,output);
    int a = min(x, min(y, z)) + input[i][j];
    output[i][j]=a;
    return a;
}
int mincostPath_DP(int **input,int n,int m,int **output){
    output[n-1][m-1]=input[n-1][m-1];
    for(int j=m-2;j>=0;j--){
        output[n-1][j]=output[n-1][j+1]+input[n-1][j];
    }
    for(int i=n-2;i>=0;i--){
        output[i][m-1]=output[i+1][m-1]+input[i][m-1];
    }
    for(int i=n-2;i>=0;i--){
        for(int j=m-2;j>=0;j--){
            output[i][j]= min(output[i][j+1],min(output[i+1][j+1],output[i+1][j])) + input[i][j];
        }
    }
    return output[0][0];
}
int minCostPath(int **input, int n, int m) //ACTUAL FN given
{   
    int **output= new int *[n];
    for(int i=0;i<n;i++){
        output[i]=new int[m];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            output[i][j]=-1;
        }
    }
    //return minCostPath(input, n, m, 0, 0);
    //return mincostPath_mem(input,n,m,0,0,output);
    return mincostPath_DP(input, n, m, output);

}



int main()
{
    int **arr, n, m;
    cin >> n >> m;
    arr = new int *[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[m];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << minCostPath(arr, n, m) << endl;
    
}