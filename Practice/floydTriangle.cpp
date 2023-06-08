#include<iostream>
using namespace std;
int main(){
    
    int rowNum;
    cout<<"Enter a number: ";
    cin>>rowNum;
    int k=1;
    for(int i=0;i<rowNum;i++){
        for(int col=0;col<(i+1);col++){
            cout<<k++<<" ";
        }
        cout<<endl;
    }
    return 0;
}