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

//정렬 파트
for(int i=0;i<N;i++){
    
    for(int k=i;k<N;k++){
        if(Array[i]>Array[k]){
            temp=Array[i];
            Array[i]=Array[k];
            Array[k]=temp;
        } 
    }
}

//중복 제거
for(int i=0;i<N;i++){
     if(Array[i]==Array[i+1]){
         for(int k=i;k<N;k++){
             Array[k]=Array[k+1];
         }
         N--;
         i--;
     }
}

cout << Array[N-3];
//Sleep(3000000);
}