#include<iostream>

using namespace std;

int main(){
    int a;
    cout << "garigiin dugaar oruulna uu:";
    cin >> a;
    switch(a){
        case 1: {
            cout << "Dawaa";
            break;
        }
        case 2: {
            cout << "Myagmar";
            break;
        }
        case 3: {
            cout << "Lhagwa";
            break;
        }
        case 4: {
            cout << "Purew";
            break;
        } 
        case 5: {
            cout << "Baasan";
            break;
        }
        default: {
            cout << "Garig bish";
            break;
        }   
    }
    return 0;
}