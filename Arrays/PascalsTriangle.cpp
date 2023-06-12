#include <bits/stdc++.h>

vector<vector<long long int>> printPascal(int n) 
{
  // Write your code here.
    vector<vector<long long int>> ans(n);
    for(int row=0; row<n; row++){
        ans[row].resize(row+1);
        ans[row][0]=ans[row][row]=1;
        for(int col=1; col<row; col++){
            ans[row][col]=ans[row-1][col-1]+ans[row-1][col];
        }
    }
    return ans;
}
