//Write a program in C++ to display n terms of natural number and their sum.
#include<iostream>
using namespace std;
int main(){
    int i,sum=0,num;
    cout<<"Enter the number \n";
    cin>>num;
    //sum=0;
    cout<<"The first natural number"<<num<<endl;
    
    for(int i=1;i<=num;i++){
        cout<<i<<endl;
        sum=sum+=i;
    }
    cout<<"The sum of natural number"<<sum<<endl;
    

    return 0;
}