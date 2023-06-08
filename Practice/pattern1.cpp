#include<iostream>
using namespace std;

// 1
// 2*2
// 3*3*3
// 4*4*4*4
// 4*4*4*4
// 3*3*3
// 2*2
// 1

int main(){
    int rowNum;
    cout<<"Enter the number of rows"<<endl;
    cin>>rowNum;
    for(int row=0;row<rowNum;row++){
        for(int col=0;col<row+1;col++){
            cout<<(row+1);
            if(col!=row){
                cout<<"*";
            }
        }
        cout<<endl;
    }
    for(int row=0;row<rowNum;row++){
        for(int col=0;col<rowNum-row;col++){
            cout<<(rowNum-row);
            if(col!=rowNum-row-1){
                cout<<"*";
            }
        }
        cout<<endl;
    }
    return 0;
}