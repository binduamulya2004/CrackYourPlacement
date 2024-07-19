#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int subarraySum(vector<int> &arr, int k)
    {
        unordered_map<int, int> mpp;
        int n = arr.size();
        int cnt = 0;
        mpp[0] = 1;
        int presum = 0;
        for (int i = 0; i < n; i++)
        {
            presum += arr[i];
            int remove = presum - k;
            cnt += mpp[remove];
            mpp[presum] += 1;
        }
        return cnt;
    }
};