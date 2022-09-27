//Take two int values from user and print greatest among them.
//Take two int values from user and print greatest among them.
#include<iostream>
using namespace std;
int main (){
    int number1 ,number2;
    cout<<"Enter the number1"<<endl;
    cin>>number1;
    cout<<"Enter the number2"<<endl;
    cin>>number2;
    if (number1>number2){
        cout<<"number1 is greater"<<endl;
    }
    else if  (number2>number1){    
        cout<<"number2 is greater"<<endl;

    }
    else if (number1==number2) {
        cout<<"Both are equal"  ;
    }    
    
        return 0;
    }