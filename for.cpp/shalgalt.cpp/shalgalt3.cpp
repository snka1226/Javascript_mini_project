#include<iostream>

using namespace std;

bool checkYear (int year){
    if(year%400==0)
    return true;

    if(year%100==0)
    return false;

    if(year%4==0)
    return true;
    return false;
}
int main(){
    int n;
    cout << "Ta jilee oruulna uu:";
    cin >> n;

    checkYear(n)?cout << "mun":
    cout << "bish";
    return 0;
}