#include<iostream>
#include<cmath>
using namespace std;

int decimalToBinaryMethod1(int num){
    int binaryNum=0;
    int i=0;
    while(num>0){
        int bit = num%2;
        binaryNum = bit*pow(10,i++) + binaryNum;
        num=num/2;
    }
    return binaryNum;
}

int decimalToBinaryMethod2(int num){

    int binaryNum=0;
    int i=0;
    while(num>0){
        int bit = (num & 1);
        binaryNum = binaryNum + bit*pow(10,i++) ;
        num=num>>1;
    }
    return binaryNum;
}

int binaryToDecimal(int n){
    int decimal=0;
    int i=0;
    while(n){
        int bit = n % 10;
        decimal = decimal + bit*pow(2,i++);
        n=n/10;
    }
    return decimal;
}


int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"The binary equivalent is: "<<decimalToBinaryMethod2(n)<<endl;

    int binary;
    cout<<"Enter a number: ";
    cin>>binary;
    cout<<"The decimal equivalent is: "<<binaryToDecimal(binary)<<endl;

    
    return 0;
}
