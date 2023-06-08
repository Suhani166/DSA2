#include <iostream>
#include <vector>
using namespace std;

//  VERY IMPORTANT
// PROBLEM STATEMENT:- https://practice.geeksforgeeks.org/problems/the-painters-partition-problem1535/1
//exactly same as book allocation problem

bool isPossibleSolution(int a[], int n,int k, long long mid){
    int timeSum=0;
    int c=1;
    for(int i=0;i<n;i++){
        if(a[i]>mid){
            return false;
        }
        if(timeSum+a[i] > mid){
            c++;
            timeSum= a[i];
            if(c>k){
                return false;
            }
        }
        else{
            timeSum+=a[i];
        }
    }
    return true;
}

long long minTime(int arr[],int n,int k){

    long long start = 0;
    long long end = 0;
    for(int i=0;i<n;i++){
        end+=arr[i];
    }
    long long ans = -1;

    while (start <= end)
    {
        long long mid = start+(end-start)/2;

        if (isPossibleSolution(arr,n,k,mid))
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
    int arr[] = {5,10,30,20,15};
    int n=5,k=3;
    long long answer= minTime(arr,n,k);

    cout<<"The minimum time is: "<<answer<<endl;

    return 0;
}