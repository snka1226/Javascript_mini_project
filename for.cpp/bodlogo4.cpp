#include<iostream>

using namespace std;

int main(){
    int n;
    bool isPrime =true;
    cout << "n toog oruulna uu:";
    cin >> n;
    for (int i=2; i<n; i++){
        if(n%i==0){
            cout << "Anhnii too bish.";
            isPrime= false; 
            break;
        }
    }
    if(isPrime==true){
        cout << "Anhnii too mun.";
    }
    return 0;
}