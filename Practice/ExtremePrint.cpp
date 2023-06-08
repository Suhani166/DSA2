#include<iostream>
using namespace std;


//if input: arr[]={1,2,3,4,5,6,7,8}
//output: 1 8 2 7 3 6 4 5

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

    cout<<"The array is: "<<endl;
    while((start<=end)){
        if(start==end){
            cout<<arr[start]<<" ";
        }
        else{
            cout<<arr[start]<<" ";
            cout<<arr[end]<<" ";
        }
        start++;
        end--;
    }

    return 0;
}