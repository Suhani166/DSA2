#include<iostream>
#include<vector>
using namespace std;

//Move all negative numbers in array to left side and +ve to right.
//order doesnt matter
//Brute force approach- sort the array simply. but time complexity will be higher
//better approach- dutch national flag - 2 pointer approach

int main(){

    vector<int> arr{1,4,-3,6,-7,8,-12,-2,9};
    int low=0,high=arr.size()-1;

    while(low<high){
        if(arr[low]<0){
            low++;
        }
        else if(arr[high]>0){
            high--;
        }
        else{
            swap(arr[low],arr[high]);
        }
    }
    
    //printing
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}