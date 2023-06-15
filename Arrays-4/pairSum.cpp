#include <bits/stdc++.h>

vector<vector<int>> pairSum(vector<int> &arr, int s){
   sort(arr.begin(),arr.end());

   vector<vector<int>>ans;
   int n=arr.size();
   for(int i=0;i<n;i++)
   {
     if (lower_bound(arr.begin() + i + 1, arr.end(), s - arr[i]) !=upper_bound(arr.begin() + i + 1, arr.end(), s - arr[i])) 
      {
       auto it = lower_bound(arr.begin() + i + 1, arr.end(), s - arr[i]);
       while (it < upper_bound(arr.begin() + i + 1, arr.end(), s - arr[i]))
       {
         ans.push_back({arr[i],*it});
         it++;
       }
       arr[i]=INT_MAX;
      }
   }
   return ans;
}