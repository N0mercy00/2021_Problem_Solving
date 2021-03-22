#include <iostream>
#include <windows.h>

using namespace std;

int main(){
    cout<<"Enter two number n and m\n";
    int n,m,sum=0;

    cin>>n>>m;

    for(int i =1;i<=n;i++){
        if(i%m==0){
            sum = sum + i;
        }
    }
    cout<<sum;

    Sleep(1000);
}