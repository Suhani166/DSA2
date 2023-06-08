#include<iostream>
using namespace std;
int main(){
    
    int rowNum;
    cout<<"Enter a number: ";
    cin>>rowNum;
    
    for(int row=1;row<=rowNum;row++){
        int C = 1;
        for(int col=1;col<=row;col++){
            cout<<C<<" ";
            C = C * (row - col) /col;
        }
        cout<<endl;
    }
    return 0;
}