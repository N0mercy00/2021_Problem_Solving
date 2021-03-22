#include <iostream>
#include <windows.h>

using namespace std;

int main() {

    int n,sum;
    sum = 0;

    cin >> n;

    cout << 1;
    sum=sum+1;
    for (int i = 2; i <n; i++) {
        
        if(n%i==0){
        cout << " ";
        cout << "+";
        cout << " ";
        cout<<i;
        
        sum=sum+i;
        }
    }

    cout <<" ";
    cout <<"=";
    cout <<" ";
    cout <<sum;

    
}