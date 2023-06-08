#include<iostream>
using namespace std;
int main(){
    int rowNum,colNum;
    cout<<"Enter number for rows and columns"<<endl;
    cin>>rowNum>>colNum;
    for(int row=0;row<rowNum;row++){
        for(int col=0;col<colNum;col++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}