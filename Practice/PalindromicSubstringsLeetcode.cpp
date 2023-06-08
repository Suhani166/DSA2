#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <limits.h>
using namespace std;

// https://leetcode.com/problems/palindromic-substrings/description/

int expandAround(string s, int i, int j)
{
    int count = 0;
    while (i >= 0 && j < s.length() && s[i] == s[j])
    {
        count++;
        i--;
        j++;
    }
    return count;
}

int countSubstrings(string s)
{
    int count = 0;
    int n = s.length();
    for (int i = 0; i < n; i++)
    {
        // odd
        int oddAns = expandAround(s, i, i);
        count += oddAns;
        // even
        int evenAns = expandAround(s, i, i + 1);
        count += evenAns;
    }
    return count;
}
int main()
{
    string s;
    cin >> s;
    int ans = countSubstrings(s);
    cout << "The palindrome substrings are: " << ans << endl;
    return 0;
}