#include<iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int x[n+5], s=1;
    int min=-1e9;
    bool check=1;

    for(int i=0; i<n; && check; i++){
        cin >> x[i];
        if (x[i]=min){
            min=x[i];
        }else{
            check = 0;
        }
    }
    
    if(check){
        cout << "YES";
    }else{
        cout << "NO";
    }
    return 0;
}