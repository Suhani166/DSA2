#include<iostream>
#include<vector>
using namespace std;

int findUnique(vector<int> arr){  
    int uniqueVal=0;  
    for(int i=0;i<arr.size();i++){
        uniqueVal=uniqueVal^arr[i];
    }
    return uniqueVal;
}


int main(){
    
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the elements: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int uniqueEle = findUnique(arr);
    cout<<"Unique element in the array is: "<<uniqueEle<<endl;
    return 0;
}