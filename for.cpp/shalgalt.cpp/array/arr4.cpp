#include<iostream>

using namespace std;

int main(){
    int arr[] = {23,56,22,89,100,45,76,91};
    int max = arr[0];

    for(int i=0; i<8; i++){
        cout << i << ": " << arr[i] << endl;
        if(max < arr[i]){
            max = arr[i];
        }
    }
    cout << "Max: " << max << endl;
    return 0;

}