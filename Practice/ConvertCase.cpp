#include <iostream>
#include <string.h>
using namespace std;

void toUpperCase(char arr[])
{
    int len = strlen(arr);
    for (int i = 0; i < len; i++)
    {
        if (arr[i] >= 'a' && arr[i] <= 'z')
        {
            arr[i] = arr[i] - 32;
        }
    }
}

void toLowerCase(char arr[])
{
    int len = strlen(arr);
    for (int i = 0; i < len; i++)
    {
        if (arr[i] >= 'A' && arr[i] <= 'Z')
        {
            arr[i] = arr[i] + 32;
        }
    }
}

int main()
{
    char ch[100];
    cout << "Enter a word in Lowercase" << endl;
    cin >> ch;
    cout << "Initial String: " << ch << endl;
    toUpperCase(ch);
    cout << "Uppercase String: " << ch << endl;

    char ch2[100];
    cout << "Enter a word in Uppercase" << endl;
    cin >> ch2;
    cout << "Initial String: " << ch2 << endl;
    toLowerCase(ch2);
    cout << "Lowercase String: " << ch2 << endl;
    return 0;
}