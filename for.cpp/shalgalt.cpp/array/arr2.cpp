#include<iostream>

using namespace std;

int main(){
    int length = 0;
    int sum = 0;

    cout << "===============" << endl;
    cout << "Massiviin urtiig oruulna uu:" << endl;
    cin >> length;

    int arr[length];
    cout << "===============" << endl;
    for(int i=0; i<length; i++){
        cin >> arr[i];
    }
    cout << "===============" << endl;
    cout << "Original array" << endl;
    for(int i=0; i<length; i++){
        cout << arr[i] << "  ";
        sum = sum + arr[i];
    }
    cout << "]\n";
    cout << "===============" << endl;
    cout << "sum of array: " << sum << endl;

    return 0;
}