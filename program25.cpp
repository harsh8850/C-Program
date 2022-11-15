//Write a program in C++ to read 10 numbers from keyboard and find their sum and average.
#include<iostream>
using namespace std;
int main(){
    int i,sum=0,num;
    float avg;
    cout<<"Enter the number \n";
    cin>>num;
    //sum=0;
    //cout<<"The first natural number"<<num<<endl;
    
    for(int i=1;i<=num;i++){
        cout<<i<<endl;
        sum=sum+=i;
        avg=sum/10.0;
    }
    
    //avg=sum/10.0;
    cout<<"The sum of natural number is "<<sum<<endl;
    cout<<"The avg of "<<avg<<endl;
    

    return 0;
}