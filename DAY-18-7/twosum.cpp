#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &arr, int target)
    {
        sort(arr.begin(), arr.end());
        vector<int> res;
        int n = arr.size();
        int left = 0, right = n - 1;
        while (left < right)
        {
            int sum = arr[left] + arr[right];
            if (sum == target)
            {
                res.push_back(left);
                res.push_back(right);
            }
            else if (sum < target)
                left++;
            else
                right--;
        }
        return res;
    }
};