#include<iostream>
using namespace std;
//    1
//   232
//  34543
// 4567654

//row=2
int main(){
    int rowNum;
    cout<<"Enter number for rows"<<endl;
    cin>>rowNum;
    for(int row=0;row<rowNum;row++){
        for(int col=0;col<rowNum-(row+1);col++){
            cout<<" ";
        }
        int temp=row; //row=2 and temp=2
        for(int col=0;col<(2*row+1);col++){
            if(temp <(2*row+1)){ //2<5 3<5 4<5 ,5!<5 
                cout<<++temp; //temp=3,4,5
            }
            else{
                cout<<--temp; //4
            }
        }
        cout<<endl;
    }
    return 0;
}