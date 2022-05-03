#include<iostream>

using namespace std;

int main(){
    int a;
    cout << "Garigiin dugaar oruulna uu:";
    cin >> a;
    switch(a){
        case 1: case 6: {
            cout << "1 dahi udur ywahgui.";
            break;
        }
        case 2: case 7: {
            cout << "2 dahi udur ywahgui.";
            break;
        }
        case 3: case 8: {
            cout << "3 dahi udur ywahgui.";
            break;
        }
        case 4: case 9: {
            cout << "4 dahi udur ywahgui.";
            break;
        }
        case 5: case 0: {
            cout << "5 dahi udur ywahgui.";
            break;
        }
        default: {
            cout << "Udur bish";
            break;
        }
    }
    return 0;
}