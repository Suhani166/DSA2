#include<iostream>
#include<vector>
using namespace std;

int main(){

    // vector<int> arr{1,3,5,7,2,4,6};
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the values in array: "<<endl;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }

    int key;
    cout<<"Enter the key value: ";
    cin>>key;

    cout<<"Numbers whose sum is equal to "<<key<<" are: "<<endl;
    for(int i=0;i<arr.size()-1;i++){
        for(int j=i+1;j<arr.size();j++){
            if(arr[i]+arr[j]==key){
                cout<<"("<<arr[i]<<" "<<arr[j]<<")"<<endl;
            }
        }
    }
    return 0;
}