#include <iostream>
#include <string.h>
using namespace std;

void ReplaceSpaces(char arr[])
{
    int len = strlen(arr);
    for (int i = 0; i < len; i++)
    {
        if (arr[i] == ' ')
        {
            arr[i] = '@';
        }
    }
}
int main()
{
    char ch[100];
    cout << "Enter a string" << endl;
    cin.getline(ch, 100);
    cout << "Initial String is: " << ch << endl;
    ReplaceSpaces(ch);
    cout << "String after replacement is: " << ch << endl;
    return 0;
}