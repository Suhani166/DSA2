#include<iostream>
#include<limits.h>
using namespace std;


int main(){
    
    int arr[100];
    int size;
    cout<<"Enter the size of array: ";
    cin>>size;

    cout<<"Enter elements in array: "<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }


    int start=0,end=size-1;
    //reverse logic
    while((start<=end)){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }

    cout<<"The array is: "<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}