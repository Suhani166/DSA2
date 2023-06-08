#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char arr[50];
    cout<<"Enter a word"<<endl;
    cin>>arr;
    int i=0,len=0;
    while(arr[i]!='\0'){
        len++;
        i++;
    }
    cout<<"The length of String is: "<<len<<endl;
    cout<<"Length using strlen: "<<strlen(arr)<<endl;
    return 0;
}