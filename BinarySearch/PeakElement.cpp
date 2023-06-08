#include <iostream>
#include <vector>
using namespace std;

// peak element: here the elements left to the Peak element are sorted in ascending order and the ones on right
// are sorted in descending order. Therefore, graphically it's an inverted V type of graph
// Example : 0 7 10 27 6 5 2
// here, 27 is the peak element.
int PeakElement(vector<int> arr)
{
    int low = 0;
    int high = arr.size() - 1;

    while (low < high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] > arr[mid + 1] && arr[mid] > arr[mid - 1]) // greater than both left & right elements
        {
            cout << "Peak Element: " << arr[mid] << endl;
            return mid;
        }
        else if (arr[mid] < arr[mid + 1]) // this means mid is left of the peak element currently
        {
            low = mid + 1; // so we move forward(towards right)
        }
        else
        {
            high = mid; // mid was on right side so moving towards left
        }
    }
    return -1;
}

int main()
{

    // vector<int> v{1,2,3,10,6,4};
    vector<int> v{0,  10,  5, 2};
    int index = PeakElement(v);

    if (index == -1)
    {
        cout << "Number not found" << endl;
    }
    else
    {
        cout << "Index of Peak Element: " << index << endl;
    }

    return 0;
}