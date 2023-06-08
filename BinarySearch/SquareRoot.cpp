#include <iostream>
#include <vector>
using namespace std;

// SqaureRoot element: Finf sqrt using binary search
// Example : sqrt(25)
// Inference: (1) the range to search for sqrt will be from 0 -- 25
//(2) we calculate and mid and then check mid*mid == target(25 in this case),if yes then return
//(3) if mid*mid > target, move to left else move right

int SquareRoot(int num)
{
    int low = 0;
    int high = num;
    int ans;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (mid * mid == num)
        {
            return mid;
        }
        else if (mid * mid > num)
        {
            high = mid - 1;
        }
        else
        {
            ans = mid;
            low = mid + 1;
        }
    }
    return ans;
}

double PreciseAnswer(int num, int dec)
{

    double step = 0.1;
    double finalAns = SquareRoot(num);
    cout << "The integer value: " << finalAns << endl;

    for (int i = 1; i <= dec; i++)
    {
        for (double j = finalAns; (j * j) <= num; j += step)
        {
            finalAns = j;
        }
        step = step / 10;
    }
    return finalAns;
}

int main()
{
    int num, digit;
    cout << "Enter a number: " << endl;
    cin >> num;
    cout << "Answer precise upto how many decimal digits?" << endl;
    cin >> digit;
    double answer = PreciseAnswer(num, digit);

    cout << "The Sqaure Root of " << num << " is: " << answer << endl;

    return 0;
}