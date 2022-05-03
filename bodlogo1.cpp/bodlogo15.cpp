#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int a= 1;
    int b= 2;
    int c= 2340;
    cout << "Solve X^2 + 2x + 2340 = " << endl;
    /*
    X1 = (-b + sqrt(b*b)-(4*a*c))/2*a;
    X2 = (-b - sqrt(b*b)-(4*a*c))/2*a;
    */ 
    int d= (b * b) - (4 * a * c);
    int e = d * (-1);
    float f= sqrt(e);
    float g= -b + f;
    float h= -b - f;
    float x1= g / 2;
    float x2= h / 2;
    cout << "x1=" << x1 << endl;
    cout << "x2=" << x2;

    return 0;
}