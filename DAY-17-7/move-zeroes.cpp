#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        int n=nums.size();
        int j=n-1;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==0)
            {
                int temp=nums[i];
                nums[i]=nums[j];
                nums[j]=temp;
                j--;
            }
        }
    }
};