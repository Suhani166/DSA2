#include<iostream>
#include<vector>
using namespace std;

int main(){

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
    for(int i=0;i<arr.size()-2;i++){
        for(int j=i+1;j<arr.size()-1;j++){
            for(int k=j+1;k<arr.size();k++){
                if( (arr[i]+arr[j]+arr[k]) == key){
                    cout<<"("<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<")"<<endl;
                }
            }
        }
    }
    return 0;
}