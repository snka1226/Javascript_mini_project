#include<iostream>

using namespace std;

int main()
{
    int row=0, col=0;
    int arr2d[3][3]= 
    {
        {9,8,7},
        {3,4,9},
        {1,2,3}    
    };

    for(row=0; row<3; row++)
    {
        for(col=0; col<3; col++)
        {
            cout << arr2d[row][col] << " ";
        }
        cout << endl;
    }
    cout << "Niilber: ";
    return 0;
}