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

    int max=INT_MIN; //or max= arr[0]

    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }

    cout<<"Maximum number is: "<<max<<endl;
    return 0;
}