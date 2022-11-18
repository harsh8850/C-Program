// Robot Talking with us 
#include<iostream>
using namespace std;
int main(){
    char button;
    cout<<"Push the button  " ;
    cin>>button;
    if(button=='a'){
        cout<<" hello"<<endl;
    }else if (button=='b'){
        cout<<" I am Akshat Robot"<<endl;

    }else if (button=='c'){
        cout<<" I am not a human"<<endl;
    }else if (button=='d'){
        cout<<" Ok Thank you By bY i am tired "<<endl;
    }
    else{
        cout<<"Sorry Dost I am sleeping Dont Disturb me "<<endl;

    }
    
    return 0;
}