#include<iostream>
#include<vector>
using namespace std;


//considering only positive numbers
int main(){
    vector<int> a{2,3,4,6,8};
    vector<int> b{1,3,7,9};
    
    vector<int> v;

    //removing duplicates
    for(int i=0;i<a.size();i++){
        for(int j=0;j<b.size();j++){
            if(a[i]== b[j]){
                //marking
                b[j]=-1;
            }
        }
    }

    for(int i=0;i<a.size();i++){
        if(a[i] != -1){
            v.push_back(a[i]);
        }
    }
    for(int i=0;i<b.size();i++){
        if(b[i] != -1){
            v.push_back(b[i]);
        }
    }

    
    cout<<"Resultant Array: "<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}