#include<iostream>

using namespace std;

int main(){
    int a;
    cout << "Enter number=";
    cin >> a;
    for (int too=0; too<=a; too++){
        if(too %2 !=0){
            cout << too << " ";
        }
    }
    return 0;
}