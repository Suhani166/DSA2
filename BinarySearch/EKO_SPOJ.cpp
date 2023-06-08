#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
using namespace std;

//  VERY IMPORTANT
// PROBLEM STATEMENT:- https://practice.geeksforgeeks.org/problems/aggressive-cows/1

bool isPossibleSolution(vector<long long int> &arr, long long int m, long long int mid)
{
    long long int sum = 0;
    for (long long int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > mid)
        {
            long long int diff = arr[i] - mid;
            sum += diff;
        }
    }
    return sum >= m;
}

long long int solve(long long int n, long long int m, vector<long long int> &arr)
{

    // Write your code here
    long long int start = 0;
    long long int end;
    end = *max_element(arr.begin(), arr.end());
    long long int ans = -1;
    while (start <= end)
    {
        long long int mid = start + (end - start) / 2;
        if (isPossibleSolution(arr, m, mid))
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
    long long int n, m;
    cin >> n >> m;
    vector<long long int> arr(n);
    for (int i = 0; i < n; i++)
    {
        long long int height;
        cin >> height;
        arr.push_back(height);
    }
    long long int answer = solve(n, m, arr);
    cout << "The answer is: " << answer << endl;
    return 0;
}