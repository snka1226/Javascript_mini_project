#include<iostream>

using namespace std;

int main(){
    int long n, x, m, s=0;
    cout << "n toog oruulna uu= ";
    cin >> n;
    m=n;
    
    do{
        x= m%10;
        s=(s*10)+x;
        m=m/10;
    }while(m!=0);
    
    if(n==s)
    cout << "tanii oruulsan too palindrom too mun baina. " ;
    else 
    cout << "tanii oruulsan too palindrom too bish baina. ";
    return 0;
}