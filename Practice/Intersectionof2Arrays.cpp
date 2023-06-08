#include<iostream>
#include<vector>
using namespace std;


int main(){
    
    vector<int> arr{1,2,3,3,4,6,8};
    vector<int> brr{3,3,4,10};

    vector <int> ans;

    for(int i=0;i<arr.size();i++){
        for(int j=0;j<brr.size();j++){
            if(arr[i]== brr[j]){
                //marking
                brr[j]=-1;
                ans.push_back(arr[i]);
            }
        }
    }

    cout<<"The Intersection is: ";
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}