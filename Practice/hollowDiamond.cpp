#include<iostream>
using namespace std;
//     *
//    * *
//   *   *
//  *     *
// *       *
// *       *
//  *     *
//   *   *
//    * *
//     *
int main(){
    int rowNum;
    cout<<"Enter number for rows"<<endl;
    cin>>rowNum;
    for(int row=0;row<rowNum;row++){

        for(int col=0;col<rowNum-(row+1);col++){
            cout<<" ";
        }
        for(int col=0;col<(2*row+1);col++){
            if(col==0 || col==(2*row ) ){
                cout<<"*";
            }
            else{
              cout<<" ";  
            }
            
        }
        cout<<endl;
    }

    for(int row=0;row<rowNum;row++){

        for(int col=0;col<row;col++){
            cout<<" ";
        }
        for(int col=0;col<(2*rowNum - (2*row+1) );col++){
            if(col==0 || col==(2*rowNum - (2*row+1) -1 ) ){
                cout<<"*";
            }
            else{
              cout<<" ";  
            }
            
        }
        cout<<endl;
    }
    return 0;
}