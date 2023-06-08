#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> arr{5, 4, 3, 2, 1};
    int n = arr.size();

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << "\t";
    }

    for (int i = 0; i < n; i++)
    {
        bool swapped = false;
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swapped = true;
                swap(arr[j], arr[j + 1]);
            }
        }

        if (swapped == false)
        { // array is sorted.
            break;
        }
    }
    cout << "\nAfter sorting" << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << "\t";
    }
    return 0;
}