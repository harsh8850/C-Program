//Write a program in C++ to display the cube of the number upto a given integer
#include<iostream>
using namespace std;
int main(){
    int i,num,cube;
    cout<<"Enter the integer \n";
    cin>>num;
    for(int i=1;i<=num;i++){
        cube=i*i*i;
        
    }
    cout<< "the cube of givern integer is"<<cube<<endl;

    return 0;
}
