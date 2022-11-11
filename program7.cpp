//program to check Leap Year
#include<iostream>
using namespace std;
int main(){
    int year;
    cout<<"Enter the year \n";
    cin>>year;
    if(((year%4==0)&&(year%100!=0))||(year%400==0)){
        cout<<"This is leap year \n"; 
    }else{
        cout<<"This is not leap year";
    }

    return 0;
}