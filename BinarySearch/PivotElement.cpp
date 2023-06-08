#include <iostream>
#include <vector>
using namespace std;

// Pivot element: here the array is a rotated sorted array and there can be no duplicate elements
// Example : 9 10 2 4 6 8
// Inference: (1) The values before and after the pivot are sorted in increasing order
//(2) the values after the pivot val will always be smaller than the start value
// here, 10 is the pivot element.

int PivotElement(vector<int> arr)
{
    int low = 0;
    int high = arr.size() - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (low == high)
        {
            return mid;
        }
        if (mid <= high && arr[mid] > arr[mid + 1])
        {
            return mid;
        }
        if ((mid - 1) >= low && arr[mid - 1] > arr[mid])
        {
            return mid - 1;
        }
        if (arr[low] > arr[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return -1;
}

int main()
{

    vector<int> v{2, 4, 6, 8, 9, 10};
    int index = PivotElement(v);

    if (index == -1)
    {
        cout << "Number not found" << endl;
    }
    else
    {
        cout << "The Pivot Element is: " << v[index] << endl;
        cout << "Index of Pivot Element: " << index << endl;
    }

    return 0;
}