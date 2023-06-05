#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &nums, int n)
{
    //  Write your code here.
    int i = n - 2;

    while (i >= 0 && nums[i] >= nums[i + 1]) {
        i--;
    }

    if (i >= 0) {
        int j = n - 1;
        while (j > i && nums[j] <= nums[i]) {
            j--;
        }
        swap(nums[i], nums[j]);
    }

    reverse(nums.begin() + i + 1, nums.end());

    return nums;

}