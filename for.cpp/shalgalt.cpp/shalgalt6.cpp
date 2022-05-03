#include<iostream>

using namespace std;

int main(){
    int A[4], n, i, j, x;
    cout << "Ta 4 too oruulna uu: ";
    for (i=0; i<4; i++)
        cin >> A[i];
    for (i=0; i<4; i++){
        for (j=i+1; j<4; j++){
            if (A[i] < A[j]){
                x= A[i];
                A[i] = A[j];
                A[j] = x;
            }
        }
    }
    cout << "Iheesee 2 dahi too bol: " << A[1];
    return 0;
}