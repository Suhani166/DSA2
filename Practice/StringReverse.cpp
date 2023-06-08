#include <iostream>
#include <string.h>
using namespace std;

void ReverseArray(char arr[])
{
    int len = strlen(arr);
    for (int i = 0; i < (len / 2); i++)
    {
        char temp = arr[i];
        arr[i] = arr[len - i - 1];
        arr[len - i - 1] = temp;
    }
}
int main()
{
    char ch[100];
    cout << "Enter a word" << endl;
    cin >> ch;
    cout << "Initial String is: " << ch << endl;
    ReverseArray(ch);
    cout << "Reversed String is: " << ch << endl;
    return 0;
}