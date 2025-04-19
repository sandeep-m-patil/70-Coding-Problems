#include <bits/stdc++.h>
using namespace std;

//Time Complexity is   O(N * M) N is no of strs and M is length of shortest string
string longestCommonPrefix(vector<string> &strs)
{
    if (strs.empty())
        return "";

    string prefix = "";
    for (int i = 0; i < strs[0].size(); i++)
    {
        char ch = strs[0][i];
        for (int j = 1; j < strs.size(); j++)
        {
            if (i >= strs[j].size() || strs[j][i] != ch)
                return prefix;
        }
        prefix += ch;
    }
    return prefix;
}

int main()
{
    vector<string> s = {"flower", "flow", "flight"};
    cout << longestCommonPrefix(s);
}
