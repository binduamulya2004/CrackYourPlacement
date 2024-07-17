#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void setZeroes(vector<vector<int>> &ma)
    {
        int n = ma.size();
        int m = ma[0].size();
        vector<bool> zerorow(n, false);
        vector<bool> zerocol(m, false);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (ma[i][j] == 0)
                {
                    zerorow[i] = true;
                    zerocol[j] = true;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (zerorow[i] || zerocol[j])
                {
                    ma[i][j] = 0;
                }
            }
        }
        // print
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << ma[i][j] << " ";
            }
            cout << endl;
        }
    }
};