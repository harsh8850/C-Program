//program to check divisibility of any number
#include<iostream>
using namespace std;
int main (){
    int number;
    cout<<"Enter the number"<<endl;
    cin>>number;
    if((number%5==0 )&&(number%11==0)){
        cout<<"This number is divided by 5 and 11";
    }else{
        cout<<"This number is not divided by 5 and 11";
    }
    return 0;
}