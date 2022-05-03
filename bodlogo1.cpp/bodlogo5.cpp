#include<iostream>

using namespace std;

int main(){
    int a,b,c;
    cout<< "a toog oruulna uu." <<endl;
    cin>> a;
    cout<< "b toog oruulna uu." <<endl;
    cin>> b;
    cout<< "c toog oruulna uu." <<endl;
    cin>> c;
    if(a>b){
        if(a>c){
            cout<< "a too ih";
        }else{
            cout<< "c too ih";
        }
    }else{
        if(b>c){
            cout<< "b too ih";
        }else{
            cout<< "c too ih";
        }
    }
    return 0;
}