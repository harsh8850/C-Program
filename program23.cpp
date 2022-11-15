//Write a C++ program to find the sum of first 10 natural numbers
#include<iostream>
using namespace std;
int main(){
    int i,sum;
    sum=0;
    for(int i=1;i<=10;i++){
        sum=sum+i;
    }
    cout<<sum<<endl;

    return 0;
}