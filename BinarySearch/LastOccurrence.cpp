#include <iostream>
#include <vector>
using namespace std;

// search index of last occurrence
// example- arr[] ={1,2,3,4,4,4,4,6,7,8} , key=4
// then last occurrence of 4 is at index 6. therefore, ans=6.

int lastOccurrence(vector<int> arr, int key)
{
    int low = 0;
    int high = arr.size() - 1;
    int ans = -1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] == key)
        {
            // to find first occ, store ans if value is equal and then move to right tp check last occ
            ans = mid;
            low = mid + 1;
        }
        else if (arr[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return ans;
}

int main()
{

    vector<int> v{1, 2, 2, 3, 3, 3, 3, 3, 4, 4, 4, 4, 6, 7, 8};
    int key = 4;
    int indexOfLastOcc = lastOccurrence(v, key);

    if (indexOfLastOcc == -1)
    {
        cout << "Number not found" << endl;
    }
    else
    {
        cout << "Last occurrence of " << key << " is at index " << indexOfLastOcc << endl;
    }

    return 0;
}