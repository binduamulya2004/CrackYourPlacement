#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        int n = nums.size();
         vector<vector<int>> res;
        vector<int>level;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=0;i<n-2;i++)
        {
            int j=i+1;
            int k=n-1;
            if(i>0 && nums[i]==nums[i-1])continue;
            while(j<k)
            {
                int sum=nums[i]+nums[j]+nums[k];
                if(sum>0)
                {
                    k--;
                }
                else if(sum<0)
                {
                    j++;
                }else
                {
                    vector<int>level={nums[i],nums[j],nums[k]};
                    res.push_back(level);
                    j++;
                    k--;
                    while(j<k && nums[j]==nums[j-1])
                    {
                        j++;   
                    }
                    while(j<k && nums[k]==nums[k+1])
                    {
                        k--;
                    }
                }
            }
        }
        return res;
    }
};
            