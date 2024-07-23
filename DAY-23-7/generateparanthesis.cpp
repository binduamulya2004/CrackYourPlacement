#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<string> res;
    void func(int open, int close, int n, string temp, vector<string> &res)
    {
        if (open == 0 && close == 0)
        {
            res.push_back(temp);
            return;
        }

        if (open > 0)
        {
            func(open - 1, close, n, temp + "(", res);
            func(open - 1, close, n, temp + "(", res);
        }

        if (close > 0)
        {
            if (close > open)
            {
                func(open, close - 1, n, temp + ")", res);
            }
        }
    }
    vector<string> generateParenthesis(int n)
    {
        string temp = "";
        func(n, n, n, temp, res);
        return res;
    }
};