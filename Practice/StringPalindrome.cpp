#include <iostream>
#include <string.h>
using namespace std;

bool isPalindrome(char arr[])
{
    int len = strlen(arr);
    for (int i = 0; i < (len / 2); i++)
    {
        if (!(arr[i] == arr[len - i - 1]))
        {
            return false;
        }
    }
    return true;
}
int main()
{
    char ch[100];
    cout << "Enter a word" << endl;
    cin >> ch;
    if (isPalindrome(ch))
    {
        cout << ch << " is a Palindrome!" << endl;
    }
    else
    {
        cout << ch << " is not a Palindrome." << endl;
    }

    return 0;
}