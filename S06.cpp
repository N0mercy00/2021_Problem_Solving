#include <iostream>
#include <windows.h>
#include <string>

using namespace std;

int main() {

string temp;
string number;
int div=0;
cin>>temp;

for(int i=0; i <temp.size();i++){
    if(48<=temp[i]&&temp[i]<=57){
        number=number+temp[i];
    }
}

cout<<stoi(number);
cout<<'\n';

for(int i=1;i<=stoi(number);i++){
    if(stoi(number)%i==0){
        div++;
    }
}
cout<<div;

}