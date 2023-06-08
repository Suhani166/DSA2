#include<iostream>
using namespace std;
//hollow inverted half pyramid
// * * * * * *
// *       *
// *     *
// *   *
// * *
// *

int main(){
    int rowNum;
    cout<<"Enter number for rows"<<endl;
    cin>>rowNum;
    for(int row=0;row<rowNum;row++){
        for(int col=0;col<(rowNum-row);col++){
            if(row==0 || col==0 || (col== rowNum-row-1)){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    
    return 0;
}