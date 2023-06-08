#include<iostream>
using namespace std;


int getSum(int n){    //get sum of even numbers upto n
    int sum=0;
    for(int i=2;i<=n;i+=2){
        sum+=i;
    }
    return sum;
}

bool checkPrime(int num){
    for(int i=2;i<num;i++){
        if(num%i==0){
            return false;
        }
    }
    return true;
}

void printPrime(int n){
    for(int i=2;i<=n;i++){
        if(checkPrime(i)){
            cout<<i<<endl;
        }
    }
}

int CircleArea(int radius){
    int area=0;
    area=3.14*radius*radius;
    return area;
}

int getFactorial(int num){
    if(num==0){
        return 1;
    }
    int fact=1;
    for(int i=1;i<=num;i++){
        fact=fact*i;
    }
    return fact;
}

void EvenOrOdd(int num){
    if(num%2==0){
        cout<<"Even"<<endl;
    }
    else{
        cout<<"Odd"<<endl;
    }
}

char getGrade(int marks){
    switch (marks/10){
        case 10:            //if nothing is written, 'A' grade will be returned
        case 9: return 'A'; break; //break can be removed here
        case 8: return 'B'; break;
        case 7: return 'C'; break;
        case 6: return 'D'; break;
        default: return 'E';

    }
}

int main(){
    int marks;
    cout<<"Enter your marks: ";
    cin>>marks;
    char grade = getGrade(marks);
    cout<<"Your grade is: "<<grade<<endl;
    
    int n;
    cout<<"Enter the number upto which the sum is to be calculated: ";
    cin>>n;
    cout<<"The sum is: "<<getSum(n)<<endl;

    int radius;
    cout<<"Enter radius of circle: ";
    cin>>radius;
    cout<<"The area of the circle is: "<<CircleArea(radius)<<endl;

    int num;
    cout<<"Enter a number to know whether it is even or odd: ";
    cin>>num;
    EvenOrOdd(num);

    int number;
    cout<<"Enter a number: ";
    cin>>number;
    cout<<"The factorial is: "<<getFactorial(number);

    int N;
    cout<<"Enter a number: ";
    cin>>N;
    if(checkPrime(N)){
        cout<<N<<" is a Prime Number"<<endl;
    }
    else{
        cout<<N<<" is not a Prime Number"<<endl;
    }

    printPrime(N);

    return 0;
}