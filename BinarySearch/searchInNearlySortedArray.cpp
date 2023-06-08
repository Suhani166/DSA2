#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> arr, int key)
{
    int low = 0;
    int high = arr.size() - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2; // to avoid integer overflow we dont use int mid = (low + high) / 2;

        if (arr[mid] == key)
        {
            return mid;
        }
        else if ( mid+1 <= high && arr[mid + 1] == key)
        {
            return mid + 1;
        }
        else if (mid-1 >= low && arr[mid - 1] == key)
        {
            return mid - 1;
        }
        else if (arr[mid] < key)
        {
            low = mid + 2;
        }
        else
        {
            high = mid - 2;
        }
    }
    return -1;
}

int main()
{
    vector<int> arr{4, 2, 8, 6, 12, 10, 14, 16};
    int key = 6;
    int index = binarySearch(arr, key);

    if (index == -1)
    {
        cout << "Number not found" << endl;
    }
    else
    {
        cout << key << " is present at " << index << " index" << endl;
    }

    return 0;
}