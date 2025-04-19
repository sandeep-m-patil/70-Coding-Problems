#include <bits/stdc++.h>
using namespace std;

// Time complexity is O ( N log N + M) where N = number of strings, M = length of the shortest string.
string longestCommonPrefix(vector<string> &strs)
{
    if (strs.empty())
        return "";

    // Sort the strings
    sort(strs.begin(), strs.end());

    // Compare first and last strings only
    string first = strs.front();
    string last = strs.back();

    int i = 0;
    // All similar prefixes will lie between the first and last string due to sorting.
    // If the first and last differ at some character, then no other string in the sorted array can have more common characters before that point.
    while (i < first.size() && i < last.size() && first[i] == last[i])
    {
        i++;
    }

    return first.substr(0, i);
}

int main()
{
    vector<string> s = {"flower", "flow", "flight"};
    cout << longestCommonPrefix(s);
}
