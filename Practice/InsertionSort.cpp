#include <iostream>
#include <vector>
using namespace std;

// Insertion Sort
int main()
{

    vector<int> arr{10, 1, 7, 6, 14, 9};
    int n = arr.size();

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }

    // starting from 1 because first element is considered sorted
    for (int i = 1; i < n; i++)
    {
        // step 1 :- fetch value
        int val = arr[i];
        int j;
        for (j = (i - 1); j >= 0; j--)
        {
            // step 2: compare
            if (arr[j] > val)
            {
                // step3:- shift
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
        }
        // step 4 : copy
        arr[j + 1] = val;
    }
    cout << "\nAfter sorting" << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << "\t";
    }
    return 0;
}