#include <iostream>
#include <cstring>
using namespace std;

bool compare(string str1, string str2)
{
    int i = 0, a;
    while (str1[i] != 0)
    {
        a = 0;
        if (str1[i] == str2[i])
        {
            a = 1;
        }
        i++;
    }
    if (a == 1)
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }
    return true;
}
int main()
{
    string str1, str2;
    cout << "Enter str1: ";
    getline(cin, str1);
    cout << "Enter str2: ";
    getline(cin, str2);
    compare(str1, str2);
    return 0;
}