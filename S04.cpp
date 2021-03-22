#include <iostream>
#include <windows.h>

using namespace std;

int main() {

    int n;
    int arry[100];
    int max=0,min=100;
    int result;

    cin >> n;

    for(int i=0;i<n;i++){
        cin >> arry[i];
    }

    for(int i=0;i<n;i++){
        if(arry[i]>max){
            max=arry[i];
        }

        if(arry[i]<min){
            min=arry[i];
        }
    }

    result=max-min;
    cout<<result;
    
}