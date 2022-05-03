#include<iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    s=n;
    for(int i=1; i<n; i++)
    {
        for(int j=1; j<n; j++)
        {
            if(s<j)  
            cout << "* " << endl;

        }
        cout << endl;
    }
    return 0;
}