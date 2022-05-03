#include<iostream>

using namespace std;

int main(){
    int num, temp=0, sum=0;
    cout << "Ta toogoo oruulna uu ";
    cin >> num;
    cout << "Tanii oruulsan too :" << num << endl;
    while (num!=0){
        temp = (temp * 10) + (num % 10);
        sum = sum + num % 10;
        num = num / 10;
    }
    cout << "================================" << endl;
    cout << "Tanii oruulsan toonii urwuu ni :" <<temp<< endl;
    cout << "================================" << endl;

    return 0;
    
}