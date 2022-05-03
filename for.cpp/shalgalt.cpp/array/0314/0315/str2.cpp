#include<iostream>

using namespace std;

int main()
{
    cout << "============\n";
    int i=0;
    char src[] = "Hello N";
    while(src[i] !=0)
    {
        cout << src[i];
        i++;
    }
    cout << endl;
    cout << "============\n";
    return 0;       
}