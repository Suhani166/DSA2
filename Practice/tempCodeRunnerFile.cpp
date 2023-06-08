 #include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <limits.h>
using namespace std;
 
 
 int myAtoi(string s) {
        int sign=1;
        int i=0,num=0;
        while(s[i]==' '){
            i++;
        }
        if(i<s.length() && (s[i]=='-' || s[i]=='+')){
            sign = s[i]=='+'?1:-1;
            ++i;
        }
        while(i<s.length() && isdigit(s[i])){

            if(num>INT_MAX/10 || (num>INT_MAX && s[i]>'7')){
                return sign==-1 ? INT_MIN : INT_MAX;
            }
            //to convert char to int we subtract '0'
            num= num*10 +(s[i]-'0');
            ++i;
        }
        return num*sign;
    }

    int main(){
        cout<<"Enter a string: "<<endl;
        string s;
        cin>>s;
        int ans= myAtoi(s);
        cout<<"The answer is: "<<ans<<endl;
        return 0;
    }