#include <iostream>
#include <windows.h>
#include <string>

using namespace std;

int main() {

int N;
cin >> N;
int Array[N];
int temp;

for(int i=0;i<N;i++){
    cin >> Array[i];
}

for(int i=0;i<N;i++){
    
    for(int k=i;k<N;k++){
        if(Array[i]>Array[k]){
            temp=Array[i];
            Array[i]=Array[k];
            Array[k]=temp;
        } 
    }
    cout << Array[i];
    cout << " ";
}

Sleep(3000000000);
}