#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        /* vector<int>res;
         int count=0;
         sort(nums.begin(),nums.end());
         for(int i=0;i<nums.size();i++){
             if(nums[i]!=res[i])res.push_back(nums[i]);
         }
         for (auto k=res.begin(); k != res.end(); k++)
         {
             count++;
            cout << *k << " ";

            }
            return count;

        }
      set < int > set;
   for (int i = 0; i < arr.size(); i++) {
     set.insert(arr[i]);
   }
   int k = set.size();
   int j = 0;
   for (int x: set) {
     arr[j++] = x;
   }
   return k;
         */

        int i = 0;
        for (int j = 1; j < nums.size(); j++)
        {
            if (nums[i] != nums[j])
            {

                nums[i + 1] = nums[j];
                i++;
            }
        }
        return i + 1;
    }
};
