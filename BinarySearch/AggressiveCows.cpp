#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
using namespace std;

//  VERY IMPORTANT
// PROBLEM STATEMENT:- https://practice.geeksforgeeks.org/problems/aggressive-cows/1

bool isPossibleSolution(vector<int> &stalls, int k, int mid)
{
    int c = 1;
    int pos = stalls[0]; // placing first cow on stall 1

    for (int i = 1; i < stalls.size(); i++)
    {
        if (stalls[i] - pos >= mid)
        {
            c++;
            pos = stalls[i]; // another cow has been placed
        }
        if (c == k)
        {
            return true; // all cows have been placed
        }
    }
    return false;
}

int solve(int n, int k, vector<int> &stalls)
{

    // Write your code here
    sort(stalls.begin(), stalls.end());
    int start = 0;
    int end = stalls[stalls.size() - 1] - stalls[0];

    int ans = -1;
    while (start <= end)
    {
        int mid = (start + end) >> 1;
        if (isPossibleSolution(stalls, k, mid))
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return ans;
}

int main()
{
    vector<int> stalls{1, 2, 4, 8, 9};
    int k = 3;
    int n = 5;
    int answer = solve(n, k, stalls);
    cout << "The answer is: " << answer << endl;
    return 0;
}