#include <iostream>
#include <vector>
using namespace std;

// divide 2 numbers using binary search

int SolveForQuotient(int dividend, int divisor)
{
    int start = 0;
    int end = abs(dividend);
    int ans;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (abs(mid * divisor) == abs(dividend)) // perfect solution
        {
           ans= mid;
           break;
        }
        // not perfect solution
        if (abs(mid * divisor) > abs(dividend))
        {
            end = mid - 1;
        }
        else
        {
            ans = mid;       // store answer
            start = mid + 1; // search right
        }
    }

    if ((divisor > 0 && dividend > 0) || (divisor < 0 && dividend < 0)){
        return ans;
    }
    else{
        return -ans;
    }
        
}

int main()
{
    int dividend = -21;
    int divisor = 7;
    int ans = SolveForQuotient(dividend, divisor);

    cout << "The quotient is: " << ans << endl;

    return 0;
}