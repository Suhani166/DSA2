#include <iostream>
#include <vector>
using namespace std;

int binarySearch(int arr[], int size, int key)
{
    int low = 0;
    int high = size - 1;

    while (low <= high)
    {
        int mid = low + (high-low)/ 2; // to avoid integer overflow we dont use int mid = (low + high) / 2;

        if (arr[mid] == key)
        {
            return mid;
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
    return -1;
}

int main()
{

    // int n;
    // cout<<"Enter the size of array: ";
    // cin>>n;
    // vector<int> arr(n);
    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16};
    int size = 8;
    int key = 14;
    int index = binarySearch(arr, size, key);

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