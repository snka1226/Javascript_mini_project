#include <iostream>

using namespace std;

int urt(char src[])
{
    int i = 0;
    while (src[i] != 0)
    {
        i++;
    }

    return i;
}
int main()
{
    cout << "________________\n";
    char src[] = "Hello";

    cout << "\n Length:" << urt(src) << endl;
    cout << "________________\n";
    return 0;
}