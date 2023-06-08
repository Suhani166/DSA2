#include<iostream>
using namespace std;


int main(){
    int rowNum;
    cout<<"Enter number for rows"<<endl;
    cin>>rowNum;

    //full pyramid
    for(int row=0;row<rowNum;row++){

        for(int col=0;col<rowNum-(row+1);col++){
            cout<<" ";
        }
        for(int col=row;col>=0;col--){
            cout<<"* ";
        }
        cout<<endl;
    }
    //inverted full pyramid
     for(int row=0;row<rowNum;row++){
        
        for(int col=0;col<row;col++){
            cout<<" ";
        }
        for(int col=0;col<(rowNum-row);col++){
            cout<<"* ";
        }
        cout<<endl;
    }

    return 0;
}