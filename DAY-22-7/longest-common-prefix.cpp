
#include <bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h>
class Solution
{
public:
    string longestCommonPrefix(vector<string> &str)
    {
        int cnt = 0;

        int n = str.size();
        sort(str.begin(), str.end());
        for (string st : str)
            cout << st << " ";
        string a = str[0];
        string b = str[n - 1];
        string res = "";
        for (int i = 0; i < a.size(); i++)
        {
            if (a[i] == b[i])
                res += a[i];
            else
                break;
        }
        return res;
    }
};