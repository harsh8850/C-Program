//whether  check a number prime and not prime 

#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    bool flag=0;
    cout<<"Enter the number"<<endl;
    cin>>n;
    for (int i = 2; i<=sqrt(n); i++){
        if (n%i==0){
            cout<<"Not Prime"<<endl;
            flag=1;
            break;

        
        }
        
    }
    if (flag==0)
    {
        cout<<"Prime"<<endl;
    }
    
    
    return 0;
}
