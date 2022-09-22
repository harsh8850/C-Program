// **********Referance variables************
// Example :- HARSH -----> Harshu ------> Hanshu  That means diffirent name of one person ...
#include<iostream>
using namespace std ;
int main (){
    float x=455;
    float & y=x;
    cout << "x = " << x << '\n';
    cout << "y = " << y << '\n';
    return 0 ;
}
