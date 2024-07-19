#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int n = prices.size();
        int maxprofit=0;
        int buyatprice=INT_MAX;
        for(int i=0;i<n;i++)
        {
            buyatprice=min(buyatprice,prices[i]);
            maxprofit=max(maxprofit,prices[i]-buyatprice);

        }
        return maxprofit;
    }
};