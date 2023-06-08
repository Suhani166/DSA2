#include<iostream>
using namespace std;
// * * * *
// * * *
// * *
// *

int main(){
    int rowNum,colNum;
    cout<<"Enter number for rows"<<endl;
    cin>>rowNum;
    for(int row=0;row<rowNum;row++){
        for(int col=rowNum;col>row;col--){
            cout<<"* ";
        }
        cout<<endl;
    }
    // for(int row=0;row<rowNum;row++){
    //     for(int col=0; col< rowNum- row;col++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }
    return 0;
}