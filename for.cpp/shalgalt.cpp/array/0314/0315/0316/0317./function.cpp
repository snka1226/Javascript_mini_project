#include<iostream>
#include<cstring>

using namespace std;

int a = 10, b = 20;

void printText()
{
    cout << "Hello" << endl;
}

int add2()
{
    int c = a + b;
    return c;
}

int main()
{
    printText();
    printText();
    int result = add2();
    return 0;
}
/* za okey odoo ta nartaa huwisagchuudiig zarlaj uzuuliy:
int buyu integer (buhel too)
char buyu char yu ch bilee za medkue (temdegt)
float buyu float (butarhai too)
double buyu double (dawhar too biluu za bas medkue)
bool buyu boolen (ymr c bsn huwisagch ydgiig ni medku bn) */
