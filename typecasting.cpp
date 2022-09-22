// Typecasting------> one variable change in another variable ...... 
#include<iostream>
using namespace std ;
int main (){
    int a=45;
    float b=45.46 ;
    cout<<"Enter the value of a is "<<(float)a<<endl;
    cout<<"Enter the value of b is "<<(float)b<<endl;
    int c=(int)b;
    cout<<"The Expression is "<<a+b<<endl;
    cout<<"The Expression is "<<a+(int)b<<endl;
    return 0 ;
}