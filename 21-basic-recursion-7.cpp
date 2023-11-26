#include <bits/stdc++.h>
using namespace std;

void reverse(int i, int j, vector<int> &nums)
{
    if (i <= j)
    {
        return;
    }

    reverse(i - 1, j + 1, nums);
    swap(nums[i], nums[j]);
}

vector<int> reverseArray(int n, vector<int> &nums)
{
    // Write your code here.
    reverse(n, 0, nums);
    return nums;
}

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5, 6};
    //
    vector<int> ans = reverseArray(5, nums);

    for (auto i : ans)
    {
        cout << i << " ";
    }

    return 0;
}