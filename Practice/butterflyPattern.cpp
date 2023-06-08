#include<iostream>
using namespace std;

// *        *
// **      **
// ***    ***
// ****  ****
// **********
// **********
// ****  ****
// ***    ***
// **      **
// *        *

int main(){
    int rowNum;
    cout<<"Enter the number of rows: "<<endl;
    cin>>rowNum;

   //upper half 
    for(int row=0;row<rowNum;row++){
        //first triangle
        for(int col=0;col<=row;col++){
            cout<<"*";
        }
        //spaces
        for(int col=0;col<2*(rowNum-row-1);col++){
            cout<<" ";
        }
        //second triangle
        for(int col=0;col<=row;col++){
            cout<<"*";
        }
        cout<<endl;
    }

    //lower half 
    for(int row=0;row<rowNum;row++){
        //first triangle
        for(int col=0;col<(rowNum-row);col++){
            cout<<"*";
        }
        //spaces
        for(int col=0;col<2*row;col++){
            cout<<" ";
        }
        //second triangle
        for(int col=0;col<(rowNum-row);col++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}