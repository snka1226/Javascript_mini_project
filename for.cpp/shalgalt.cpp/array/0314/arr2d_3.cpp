#include<iostream>

using namespace std;

int main()
{
        int a[3][3] = 
        {
            {1,2,3},
            {4,5,6},
            {7,8,9}
        };
         
        int b[3][3] = 
        {
            {1,2,3},
            {4,5,6},
            {7,8,9}
        };
        
        int sum=0,  m=0;

        for(int i=0; i<3; i++){
            cout << "[" ;
            for(int j=0; j<3; j++){
                for(int k=0; k<3; k++){
                    sum = sum + a[i][k] * b[k][j];
                }cout << sum << " ";
                sum = 0;
            }cout << "]" << endl;
        } return 0;
}