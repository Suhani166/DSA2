#include <iostream>
#include <string.h>
#include <limits.h>
using namespace std;

// VERY IMPORTANT:
// Reorganize String Problem 767: https://leetcode.com/problems/reorganize-string/
string reorganizeString(string s)
{
    int hash[26] = {0};

    // mapping every character of the string w its frequency
    for (int i = 0; i < s.length(); i++)
    {
        hash[s[i] - 'a']++;
    }
    // O(N)

    // finding most frequent char
    char mostFreqChar;
    int maxFreq = INT_MIN;

    for (int i = 0; i < 26; i++)
    {
        if (hash[i] > maxFreq)
        {
            maxFreq = hash[i];
            mostFreqChar = i + 'a';
        }
    } // O(26)-->constant time ignored

    // placing the most frequent character first in the string
    int index = 0;
    while (maxFreq > 0 && index < s.length())
    {
        s[index] = mostFreqChar;
        maxFreq--;
        index += 2;
    } // O(N/2)=O(N)

    // returning null string if maxFreq is not 0 because that would imply
    // we are unable to place the characters
    if (maxFreq != 0)
    {
        return "";
    }
    // otherwise, placing other characters

    hash[mostFreqChar - 'a'] = 0;
    for (int i = 0; i < 26; i++)
    {
        while (hash[i] > 0)
        {
            index = index >= s.length() ? 1 : index;
            s[index] = i + 'a';
            hash[i]--;
            index += 2;
        }
    } // O(26*N)=O(N)
    // total complexity O(N)
    return s;
}
int main()
{
    string s;
    cout << "Enter a string: " << endl;
    cin >> s;

    string resStr = reorganizeString(s);
    cout << "String after Reorganizing: " << resStr << endl;
    return 0;
}