#include<iostream>

using namespace std;

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int max= arr[0], max_i = 0, min = arr[0], min_i = 0;

    for(int i=0; i<9; i++)
    {
        cout << i << ": " << arr[i] << endl;
        if(max < arr[i]){
            max = arr[i];
            max_i = i; 
        }
    }for(int i=0; i<9; i++)
    {
        cout << i << ": " << arr[i] << endl;
        if(min > arr[i]){
            min = arr[i];
            min_i = i;
        }
    }
    cout << "Max: " << max << " " << max_i << endl;
    cout << "Min: " << min << " " << min_i << endl;
    return 0;

}