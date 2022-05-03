#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n, urwuu, n2, unen = 1;
    cin >> n;
    while (unen)
    {
        n2 = n;
        urwuu = 0;
        while (n2 > 0)
        {
            urwuu = urwuu * 10 + n2 % 10;
            n2 /= 10;
        }
        if (n == urwuu)
            unen = 0;
        n++;
    }
    cout << "urwuu" << n << endl;
    return 0;
}