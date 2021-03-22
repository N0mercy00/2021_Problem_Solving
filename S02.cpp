#include <iostream>
#include <windows.h>

using namespace std;

int main() {

    int n,
    m,
    sum = 0;

    cin >> n >> m;

    cout << n;
    sum=sum+n;
    for (int i = n + 1; i <= m; i++) {
        
        cout << " ";
        cout << "+";
        cout<<i;
        sum=sum+i;
    }

    cout <<" ";
    cout <<"=";
    cout <<" ";
    cout <<sum;
}