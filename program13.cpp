//C++ program to find the sum of first n natural numbers
#include<iostream>
using namespace std;
int main(){
    int num ,sum;
    cout<<"Enter the number \n";
    cin>>num;
    sum=0;
    for(int i=1;i<=num;++i){
        sum+=i;
    }
    cout<<sum<<endl;


    return 0;
}