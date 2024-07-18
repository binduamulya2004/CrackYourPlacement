#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int subarraysDivByK(vector<int> &nums, int k)
    {
        unordered_map<int, int> mpp;
        mpp[0] = 1;
        int sum=0,cnt=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            int rem=sum%k;
            if(rem<0){
                rem=rem+k;
            }
            if(mpp.find(rem)!=mpp.end())
            {
                cnt+=mpp[rem];
                mpp[rem]+=1;
            }
            else{
                mpp[rem]=1;
            }
        }
        return cnt;
    }
};