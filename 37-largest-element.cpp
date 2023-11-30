/*
// Brute
sort and return a[n-1]

*/
#include <bits/stdc++.h>
int largestElement(vector<int> &arr, int n)
{
    // Write your code here.
    int maxi = INT_MIN;
    for (auto i : arr)
    {
        if (i > maxi)
            maxi = i;
    }

    return maxi;
}
