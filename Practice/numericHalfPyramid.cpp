#include<iostream>
using namespace std;
// 1
// 1 2
// 1 2 3
// 1 2 3 4

int main(){
    int rowNum;
    cout<<"Enter number for rows"<<endl;
    cin>>rowNum;
    cout<<" Half Pyramid\n";
    for(int row=0;row<rowNum;row++){
        for(int col=0;col<=row;col++){
            cout<<(col+1)<<" ";
        }
        cout<<endl;
    }
    cout<<"\n\n\nInverted Half Pyramid\n";
    //Inverted Half pyramid
    // 1 2 3 4 5
    // 1 2 3 4
    // 1 2 3
    // 1 2
    // 1

    for(int row=0;row<rowNum;row++){
        for(int col=0;col<rowNum-row;col++){
            cout<<(col+1)<<" ";
        }
        cout<<endl;
    }
    return 0;
}