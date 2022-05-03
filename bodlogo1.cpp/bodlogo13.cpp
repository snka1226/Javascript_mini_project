#include<iostream>

using namespace std;

int main(){
    int a;
    cout << "Toogoo oruulna uu.";
    cin >> a;
    int year= a/365;
    int week= (a%365)/7;
    int day= a-(year*365);
    cout << "a=" <<a<<endl;
    cout << "year=" <<year<<endl;
    cout << "week=" <<week<<endl;
    cout << "day=" <<day<<endl;
    return 0;
}