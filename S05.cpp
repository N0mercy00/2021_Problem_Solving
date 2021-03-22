#include <iostream>
#include <windows.h>
#include <string>

using namespace std;

int main() {

 string number;
 string sex;
 int age=0;
 


 cin>>number;
if(number.size() !=14){
    return 0;
}

string agecheck = number.substr(0,2);
string sexcheck = number.substr(7,1);

age=2019-(1900+(stoi(agecheck)));
if(sexcheck=="1"||sexcheck=="3"){
    sex="M";
    if(sexcheck=="1"){
        age=2019-(1900+(stoi(agecheck)));
    }else{
        age=2019-(2000+(stoi(agecheck)));
    }
}else if(sexcheck=="2"||sexcheck=="4"){
    sex="W";
    if(sexcheck=="2"){
        age=2019-(1900+(stoi(agecheck)));
    }else{
        age=2019-(2000+(stoi(agecheck)));
    }
}else{
    return 0;
}

cout<<age+1;
cout<<" ";
cout<<sex;
  
}