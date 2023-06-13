#include <bits/stdc++.h>

vector<int> ninjaAndSortedArrays(vector<int> &arr1, vector<int> &arr2, int m, int n)
{
    int left = m - 1;
    int right = 0;

    while (left >= 0 && right < n)
    {
        if (arr1[left] > arr2[right])
        {
            swap(arr1[left], arr2[right]);
            left--, right++;
        }
        else
        {
            break;
        }
    }

    for (int i = m, j = 0; i < arr1.size(); i++)
    {
        arr1[i] = arr2[j++];
    }
    sort(arr1.begin(), arr1.end());

    return arr1;
}