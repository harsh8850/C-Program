/*#include<iostream>
using namespace std ;
int main (){
    int age;
    cout<<"Tell me your age "<<endl ;
    cin>>age;
    if(age<18){
        cout<<"You can not come my party"<<endl;
    }
    else if (age==18){
        cout<<"You are kidd  and you need to kidd pass to come my party"<<endl;
    }
    else {
    cout<<"You can come my party "<<endl;
    }
    return 0 ;
    

}*/
// if else statment in c++ 
#include<iostream>
using namespace std ;
int main (){
    int age;
    cout<<"Tell me your age "<<endl ;
    cin>>age;
    if((age<18) && (age>1)){
        cout<<"You can not come my party"<<endl;
    }
    else if (age==18){
        cout<<"You are kidd  and you need to kidd pass to come my party"<<endl;
    }
    else if (age<1){
    cout<<"You are not yet born";
    }
    else{
    cout<<"You can come my party "<<endl;
    }
    return 0 ;

}
