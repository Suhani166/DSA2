#include<iostream>
using namespace std;
int main(){
    int rowNum,colNum;
    cout<<"Enter number for rows and columns"<<endl;
    cin>>rowNum>>colNum;
    for(int row=0;row<rowNum;row++){
        for(int col=0;col<colNum;col++){
            if(((row==0 || row==rowNum-1 || col==0 || col== colNum-1))){
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