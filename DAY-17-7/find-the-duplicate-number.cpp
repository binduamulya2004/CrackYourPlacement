#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int findDuplicate(vector<int> &nums)
    {
        int i;
        int n = nums.size();
        /*sort(nums.begin(),nums.end());
        for(int i=0;i<n-1;i++){
            if(nums[i]==nums[i+1])

            return nums[i];
        }
        return nums[i];
        }
        */
        unordered_set<int> s;
        for (int i = 0; i < n; i++)
        {
            if (s.find(nums[i]) != s.end())
            {
                return nums[i];
            }
            else
                s.insert(nums[i]);
        }
        return -1;
    }
    
};
