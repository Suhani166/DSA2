#include<iostream>
#include<vector>
using namespace std;

//approach: find min element and place it in the beginning, then find second min element and place next and so on
//takes (n-1) iterations to solve the array bcoz last element is considered sorted

int main(){
    
    vector<int> arr{5,4,3,2,1};
    int n= arr.size();

    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<"\t";
    }
    
    for(int i=0;i<n-1;i++){ 
        int min=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min]){ 
                min = j; 
            }
        }
        swap(arr[i],arr[min]); 
    }
    cout<<"\nAfter sorting"<<endl;
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << "\t";
    }
    return 0;
}