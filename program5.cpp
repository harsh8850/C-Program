// checking charge plug and non plug in laptop 
#include<iostream>
using namespace std;
int main(){
    int battery;
    cout<<"Enter the % of battery \n";
    cin>>battery;
    if (battery>50){
        cout<<"you can not plug \n";
    }else{
        cout<<"You can plug and charge laptop \n";
    }
return 0;

}