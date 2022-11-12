// checking grade
#include<iostream>
using namespace std;
int main(){
    int marks;
    cout<<"Enter the marks \n";
    cin>>marks;
    if (marks<30){
        cout<<"you are fail \n ";

    }else if (marks>=30 && marks<60){
        cout<<"D grade \n";
    }else if (marks>=60 && marks<70){
        cout<<"C grade \n";
    }else if (marks>=70 && marks<80){
        cout<<"B grade \n";
    }else if (marks>=80 && marks<90){
        cout<<"A grade";
    }else if (marks>=90 && marks<=100 ){
        cout<<"A+ grade \n";
    }else {
        cout<<" You are fail \n";
    }

    return 0;
}