#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

//  VERY IMPORTANT
// PROBLEM STATEMENT:- https://practice.geeksforgeeks.org/problems/allocate-minimum-number-of-pages0937/1
// M = no. of students and N = no of books. M>N not possible.
// NOTE:- to divide by 2, we can also do left shift by 1.

bool isPossibleSolution(int A[], int N, int M,int sol){
    int pageSum=0;
    int c=1;
    for(int i=0;i<N;i++){
        if(A[i]>sol){
            return false;
        }
        if(pageSum+A[i] > sol){
            c++;
            pageSum= A[i];
            if(c>M){
                return false;
            }
        }
        else{
            pageSum+=A[i];
        }
    }
    return true;
}

int findPages(int A[], int N, int M)
{

    if (M > N)
    {
        return -1;
    }
    int start = 0;
    int end = accumulate(A, A + N, 0);
    int ans = -1;

    while (start <= end)
    {
        int mid = (start + end) >> 1;

        if (isPossibleSolution(A, N, M, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return ans;
}

int main()
{

    // int n;
    // cout<<"Enter the size of array: ";
    // cin>>n;
    // vector<int> arr(n);
    int arr[] = {12,34,67,90};
    int N=4,M=2;
    int pages = findPages(arr,N,M);

    cout<<"The minimum no of pages allocated are: "<<pages<<endl;

    return 0;
}