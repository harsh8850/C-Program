#include<iostream>
using namespace std;
int main (){
    int n ;
    cout<<"enter the number \n";
    cin>>n;
    int sum=0;

    for(int i=0;i<=n;i++){  //(initialization; condition; update)

        sum=sum+i;
    }
    cout<<sum<<endl;

    return 0 ;
}