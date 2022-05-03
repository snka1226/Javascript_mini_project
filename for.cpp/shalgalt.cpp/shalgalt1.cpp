#include<iostream>

using namespace std;

int main(){
    int a=1, b=2, c=3, d=4;
    cout << "a toog oruulna uu: ";
    cin >> a;
    cout << "b toog oruulna uu: ";
    cin >> b;
    cout << "c toog oruulna uu: ";
    cin >> c;
    cout << "d toog oruulna uu: ";
    cin >> d;
    if(a>b){
        if(a>c){
            cout << "a too ih";
        }else{
            cout << "c too ih";
        }
    }else{
        if(b>c){
            cout << "b too ih";
        }else{
            cout << "c too ih";
        }
    }
    return 0;
}    