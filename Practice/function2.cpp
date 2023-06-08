#include<iostream>
using namespace std;

// int createNum(int arr, int n){
//     int ans=0;
//     for(int i=0;i<n;i++){
//         ans = ans*10 + arr[i];
//     }
// }

void printDigits(int num){
    int rem;
    while(num>0){
        rem=num%10;
        cout<<rem<<endl;
        num=num/10;
    }
}

int reverseNum(int num){
    int rem,rev=0;
    while(num>0){
        rem=num%10; 
        rev=(rev*10)+rem; 
        num=num/10;
    }
    return rev;
}

int main(){
    
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    printDigits(num);
    cout<<"Reversed Number is: "<< reverseNum(num)<<endl;

    return 0;
}