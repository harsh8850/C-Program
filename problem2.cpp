//Write a program to  Check Whether a Number is Even or Odd
#include<iostream>
using namespace std;
int main(){
    int number;
    cin>>number;
    if(number%2==0){
        cout<<"this is even number"<<endl;
    }else{
        cout<<"this is odd number"<<endl;
    }
    return 0;
}