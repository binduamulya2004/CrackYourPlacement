#include <bits/stdc++.h>
using namespace std;
void swap(vector<int> &arr, int a, int b)
{
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}
vector<int> findDuplicates(vector<int> &nums)
{
    int i = 0;
    while (i < nums.size())
    {
        int crt = nums[i] - 1;
        if (nums[i] != nums[crt])
        {
            swap(nums, i, crt);
        }
        else
        {
            i++;
        }
    }
    vector<int> res;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] != i + 1)
            res.push_back(i + 1);
    }
    return res;
}