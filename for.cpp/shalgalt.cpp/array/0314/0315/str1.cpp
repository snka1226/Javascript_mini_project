#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    char src[] = "Hello Nest Academy";
    char des[100] = "example";

    string str = "this is a string.";

    int len = strlen(src);
    cout << "============\n";
    cout << "Source: " << src << endl;
    cout << "Length of Source: " << len << endl;
    len = strlen(des);
    cout << "Desrtination" << des << endl;
    cout << "Length of Desrtination" << len << endl;
    cout << "Strcat: " << strcat(src,des) << endl;
    cout << "============\n";
    strcpy(des, src);
    len = strlen(des);
    cout << "Desrtination" << des << endl;
    cout << "Length of Desrtination" << len << endl;
    cout << "============\n";
    cout << "String: " << str << endl;
    cout << "String: " << str.size() << endl;
    cout << "============\n";
    
    return 0;
}