// Program to find factorial of positive number ........
#include<iostream>
using namespace std ;
int main(){
    int i,num,factorial;
    cout<<"Enter the positive number \n";
    cin>>num;
    factorial=1;
    for(int i=1;i<=num;i++){
        factorial=factorial*=i;
    }
    cout<<factorial<<endl;

    return 0;
}