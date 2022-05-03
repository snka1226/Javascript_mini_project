#include<iostream>

using namespace std;

int main(){
    int num1=0, num2 = 0;
    bool isPrime = true;
    cout << "Ta ehnii toogoo oruulna uu ";
    cin >> num1;
    cout << "Ta 2 dahi toogoo oruulna uu ";
    cin >> num2;
    cout << "=============" << endl;

    for(int i=num1; i<=num2; i++){
        for(int j=2; j<i; j++){
            if(i%j == 0){
                isPrime = false;
                break;
            }
        }
        if(isPrime){
            cout << i << " ";
        }else{
            isPrime = true;
        }
    }
    cout << "\n==============" << endl;

    return 0;
}