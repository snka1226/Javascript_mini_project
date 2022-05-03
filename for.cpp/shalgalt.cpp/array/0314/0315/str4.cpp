#include<iostream>

using namespace std;

int main()
{
    char str1[] = "Hello";
    int i = 0;
    bool temdegt_mur = true;
    char str2[]= "Hello";
    while(str1[i] !=0)
    {
        if(str1[i] == str2[i])
        {
            temdegt_mur = true;
        }
        else
        {
            temdegt_mur = false;
            break;
        }
        i++;
    }
    if(temdegt_mur)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    cout << "\n Length:" << i << endl;
    return 0;
}