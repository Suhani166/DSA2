#include<iostream>
using namespace std;

// ********1********
// *******2*2*******
// ******3*3*3******
// *****4*4*4*4*****
// ****5*5*5*5*5****
// ***6*6*6*6*6*6***
// **7*7*7*7*7*7*7**
// *8*8*8*8*8*8*8*8*
// 9*9*9*9*9*9*9*9*9

int main(){
    int rowNum;
    cout<<"Enter the number of rows"<<endl;
    cin>>rowNum;
    int k=8;
    for(int row=0;row<rowNum;row++){
        //printing first part (0-7) cols
        for(int col=0;col<k;col++){
            cout<<"*";
        }

        //printing numbers
        for(int col=0;col<(2*row+1);col++){
            if(col%2==0){
                cout<<row+1;
            }
            else{
                cout<<"*";
            }
        }

        //printing rest of the stars
        for(int col=0;col<k;col++){
            cout<<"*";
        }
        k--;
        cout<<endl;
    }
    
    return 0;
}