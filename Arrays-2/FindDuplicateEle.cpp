#include <bits/stdc++.h>

int findDuplicate(vector<int> &arr, int n){
	// Write your code here.
	int xr1 = 0, xr2 = 0;

	for(int i=1; i<n; i++)
	xr1 ^= i;

	for(int i=0; i<n; i++)
	xr2 ^= arr[i];

	return xr1^xr2;
}