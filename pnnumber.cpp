// Program to check whether an integer is positive, negative or zero
#include<iostream>
using namespace std;
int main()
{
    int number;
    cout << "Enter the number" << endl;
    cin >> number;    

    if (number > 0)
    {
        cout << "This number is positive "  << endl;
    }
    if (number < 0)
    {
        cout << "This number is negative" << endl;
    }
    return 0;
}
