#include <iostream>
#include <algorithm>
#include <vector>
#include <string.h>
#include<limits.h>
using namespace std;

int findMinDifference(vector<string> &timePoints)
{
    vector<int> minutes;

    for (int i = 0; i < timePoints.size(); i++)
    {
        string curr = timePoints[i];

        int hours = stoi(curr.substr(0, 2));
        int mins = stoi(curr.substr(3, 2));
        int totalMinutes = hours * 60 + mins;

        minutes.push_back(totalMinutes);
    }
    sort(minutes.begin(), minutes.end());

    int minDiff = INT_MAX;

    for (int i = 0; i < minutes.size() - 1; i++)
    {
        int diff = minutes[i + 1] - minutes[i];
        minDiff = min(minDiff, diff);
    }

    int lastDiff1 = (minutes[0] + 1440) - minutes[minutes.size() - 1];
    int lastDiff2 = minutes[minutes.size() - 1] - minutes[0];
    int lastDiff = min(lastDiff1, lastDiff2);
    minDiff = min(minDiff, lastDiff);
    return minDiff;
}

int main()
{
    vector<string> str{"00:00", "23:59", "00:00"};
    int answer = findMinDifference(str);
    cout << "The answer is: " << answer << endl;
    return 0;
}
