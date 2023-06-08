#include<iostream>
using namespace std;

// ***** *****
// ****   ****
// ***     ***
// **       **
// *         *
// *         *
// **       **
// ***     ***
// ****   ****
// ***** *****
int main(){
    int rowNum;
    cout<<"Enter number for rows"<<endl;
    cin>>rowNum;
    for(int row=0;row<rowNum;row++){

        for(int col=0;col<rowNum- row;col++){
            cout<<"*";
        }

        for(int col=0;col<(2*row+1);col++){
            cout<<" ";
        }

        for(int col=0;col<rowNum- row;col++){
            cout<<"*";
        }
        
        cout<<endl;
    }

    for(int row=0;row<rowNum;row++){

        for(int col=0;col<row+1;col++){
            cout<<"*";
        }

        for(int col=0;col<(2*rowNum-(2*row+1));col++){
            cout<<" ";
        }

        for(int col=0;col<row+1;col++){
            cout<<"*";
        }
        
        cout<<endl;
    }
    return 0;
}