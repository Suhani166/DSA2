#include<iostream>
using namespace std;


int main(){
    
    int arr[]= {0,1,1,1,0,0,0,1,0,1,1,0,0,1,0,1,0};
    int size=17;


    int numZero=0,numOne=0;

    for(int i=0;i<size;i++){
        if(arr[i]==0){
            numZero++;
        }
        else{
            numOne++;
        }
    }

    cout<<"Number of 0s are: "<<numZero<<endl;
    cout<<"Number os 1s are: "<<numOne<<endl;
    return 0;
}