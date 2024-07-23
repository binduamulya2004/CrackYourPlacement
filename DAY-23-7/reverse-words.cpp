#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string reverseWords(string s)
    {
        /*
        if(s.size() == 0) return s;
        stack<string> stack;
        string result;
        for(int i=0; i<s.size(); i++)
        {
            string word;
            if(s[i]==' ') continue;
            while(i<s.size() && s[i]!=' ' ) {

                word += s[i];
                i++;
            }
            stack.push(word);
        }
        while(!stack.empty())
        {
            result += stack.top();
            stack.pop();
            if(!stack.empty())
                result += " ";
        }
        return result;
        */
        stringstream ss(s);
        vector<string> v;
        string word;
        while (ss >> word)
        {
            v.push_back(word);
        }
        reverse(v.begin(), v.end());

        string res;
        for (size_t i = 0; i < v.size(); i++)
        {
            res += v[i];
            if (i < v.size() - 1)
                res += " ";
        }
        return res;
    }
};