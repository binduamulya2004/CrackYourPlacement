#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxScore(vector<int> &card, int k)
    {
        int n = card.size();
        int totalsum = accumulate(card.begin(), card.end(), 0);

        if (n == k)
            return totalsum;
        int req = n - k;
        int ans = INT_MIN;
        int currsum = 0;
        for (int i = 0; i < req; i++)
        {
            currsum += card[i];
        }
        ans = max(ans, totalsum - currsum);
        // cout<<"$$ "<<currsum<<endl;
        // k=req
        for (int i = req; i < n; i++)
        {
            currsum += card[i];
            currsum -= card[i - req];
            ans = max(ans, totalsum - currsum);
        }
        return ans;
    }
};
