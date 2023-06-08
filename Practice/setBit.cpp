#include<iostream>
using namespace std;

//logic: left shift 1 to the kth bit and then bitwise OR with the number
//Example: 10 = 1010 and let k=2 => if we do 1010|0100 we get 1110, therefore bit is set.

int setBit(int n, int k){
    int mask= 1<<k; 
    int result = n | mask;
    return result;
}

int main(){
    int num,k;
    cout<<"Enter a number and the position of the bit to be set: ";
    cin>>num>>k;
    cout<<"The answer is: "<<setBit(num,k)<<endl;
    return 0;
}