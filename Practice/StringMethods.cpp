#include<iostream>
#include<string>

using namespace std;

int main(){
    string str;
    cin>>str;
    cout<<"String is: "<<str<<endl;
    cout<<"The length is: "<<str.length() <<endl;
    cout<<"isEmpty: "<<str.empty()<<endl;
    str.push_back('U');
    cout<<"String after Pushback: "<<str<<endl;
    str.pop_back();
    cout << "String after popback: " << str << endl;
    cout<<"Substring Function: "<<str.substr(0,6)<<endl; //substr takes starting index, and LENGTH as input
    //Example: s= apple, I want app as output, so I want 3 letters. My function will be s.substr(0,3)
    return 0;
}