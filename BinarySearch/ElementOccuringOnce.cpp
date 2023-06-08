#include <iostream>
#include <vector>
using namespace std;

//all elements are in pairs except one. 

int Solve(vector<int> arr)
{
    int start = 0;
    int end = arr.size() - 1;
    int ans;

    while (start < end)
    {
        int mid = start + (end - start) / 2;

        if (start == end) // single element in array
        {
            return start;
        }
        // 2 cases: mid = even or odd

        if (mid % 2 == 0)
        {
            if (arr[mid] == arr[mid + 1])
            { // even index has pair
                start = mid + 2;
            }
            else
            { // might be the answer OR it could be the right side of our ans where pair starts at odd index
                end = mid;
            }
        }
        else // searching right side
        {
            if (arr[mid] == arr[mid - 1])
            { // odd index has pair
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
    }
    return -1;
}

int main()
{

    vector<int> arr{1, 1, 2, 2, 3, 3, 4, 4, 3, 600, 600, 4, 4};
    int ans = Solve(arr);
    cout << "The Answer is " << arr[ans] << " at index " << ans << endl;

    return 0;
}