#include<iostream>
using namespace std;

//     1
//    1 2
//   1   3
//  1     4
// 1 2 3 4 5

int main(){
    int rowNum;
    cout<<"Enter number of rows: ";
    cin>>rowNum;

    for(int row=0;row<rowNum;row++){
        //initial spaces
        for(int col=0;col<rowNum-(row+1);col++){
            cout<<" ";
        }
    
        int temp=1;
        for(int col=0;col<(2*row+1);col++){

            //printing the first and last row numbers
            if(row==0 || row==(rowNum-1)){
                if(col%2==0){
                    cout<<temp++;
                }
                else{
                    cout<<" ";
                }
                
            }
            //the numbers in between
            else{
                if(col==0 ){
                    cout<<1;
                }
                else if(col==(2*row)){
                    cout<<(row+1);
                }
                else{
                    cout<<" ";
                }
            }
            
           
        }
        cout<<endl;
    }
    return 0;
}