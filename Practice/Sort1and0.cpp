#include<iostream>
#include<vector>
using namespace std;

//Sort 0s and 1s

int main(){

    vector<int>arr{0,1,1,0,1,0,0,0,1};
    
    int start=0;
    int end= arr.size()-1;
    int i=0;

    while(i!=end){
        //swap from left
        if(arr[i]==0){
            swap(arr[start], arr[i]);
            i++;
            start++;
        }

        //swap from right
        else{
            swap(arr[end], arr[i]);
            end--;
        }
    }

    //printing
    for(int val=0;val<arr.size();val++){
        cout<<arr[val]<<" ";
    }
    return 0;
}