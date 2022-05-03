#include<iostream>

using namespace std;

int main(){
    int arr[] = {23,56,22,89,100,45,76,91};
    int min = arr[0];
    int second = 0;

    for(int i=0; i<8; i++){
        cout << i << ": " << arr[i] << endl;
        if(min > arr[i]){
            second = min;
            min = arr[i];
        }
        else if(arr[i] < second && arr[i]!=min){
            second = arr[i];
        }
    }
    cout << "Min: " << min << endl;
    cout << "Min second: " << second << endl;
    return 0;

}