//check if it is square or not of rectangle
#include<iostream>
using namespace std;
int main (){
    int leanth ,breadth;
    cout<<"Enter the rectangle leanth"<<endl;
    cin>>leanth;
    cout<<"Enter the rectangle breadth"<<endl;
    cin>>breadth;
    if (leanth==breadth){
        cout<<"it is square"<<endl;
    }
    else
    {
        cout<<"it is not square"<<endl;
    }
    return 0;
}