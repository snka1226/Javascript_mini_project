#include<iostream>

using namespace std;


int main()
{
    char str[] = "Hello";
    char word1[10];
    char word2[10];
    int i = 0;
    
    while(str[i]!=0)
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
        i++; 
    }
    cout << str << endl;
    i = 0;

    while(str[i]!=0)
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
        i++; 
    }
    cout << str << endl;
    return 0;
}