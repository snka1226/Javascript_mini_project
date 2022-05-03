#include<iostream>

using namespace std;

int main(){
    int arr[] = {23,56,22,89,100,45,76,91};
    int max = arr[0];
    int second = 0;

    for(int i=0; i<8; i++){
        cout << i << ": " << arr[i] << endl;
        if(max < arr[i]){
            second = max;
            max = arr[i];
        }
        else if(arr[i] > second && arr[i]!=max){
            second = arr[i];
        }
    }
    cout << "Max: " << max << endl;
    cout << "Max second: " << second << endl;
    return 0;

}