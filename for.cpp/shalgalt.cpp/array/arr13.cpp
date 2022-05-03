#include<iostream>

using namespace std;

int main()
{
    for(char i=0; i<5; i++)
    {
        for(char j=0; j<5; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
#include<iostream>

using namespace std;

int main()
{
    for(char i=0; i<5; i++)
    {
        for(char j=0; j<5; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
#include<iostream>

using namespace std;

int main()
{
    for(char i=0; i<5; i++)
    {
        for(char j=0; j<5; j++)
        {
            if(j==2 && i==2)
            cout << "+";
            else
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
#include<iostream>

using namespace std;

int main()
{
    for(int i=0; i<5; i++)
    {
        for(int j=0; j< i+1; j++)
        {
            cout << j+1;
        }
        cout << endl;
    }
    return 0;
}