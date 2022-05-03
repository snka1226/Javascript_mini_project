#include<iostream>

using namespace std;

int main(){
    int length, m;
    bool isUp = true;
    cout << "===========" << endl;
    cout << "Massiviin urtiig oruulna uu: ";
    cin >> length;
    int arr[length];
    cout << "===========" << endl;
    for(int a=0; a<length; a++){
        cin >> arr[a];
    }
    cout << "===========" << endl;
    cout << "Input array: {";
    for(int b=0; b<length; b++){
        cout << arr[b] << " ";
        isUp = false;
        if(arr[b] > arr[b-1]){
            isUp = true;
        }
    }
    cout << "}";
    if(!isUp){
        cout << "No";
    }else{
        cout << "Yes";
    }
    return 0;
}