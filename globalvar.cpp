//*******************Data Types
#include<iostream>
using  namespace std ;
int c=45; // global 
int main (){
    int a,b,c;
    cout<<"Enter the value of a \n";  
    cin>>a;
    cout<<"Enter the value of b \n";
    cin>>b;
    c=a+b;
    cout<<"The sum is "<<c<<endl ;
    cout<<"The global c is \n "<<::c ;
    //cout<<The global c is"<<::c;   
    return 0;


}