#include <iostream>
using namespace std;
int main()
{
    char button;
    cout << "Push the button" << endl;
    cin >> button;
    switch (button)
    {
    case 'a':
        cout << "Hello" << endl;
        break;
    case 'b':
        cout << "I am robot" << endl;
        break;
    case 'c':
        cout << "I am talk in english" << endl;
        break;
    case 'd':
        cout << "What is your name " << endl;
        break;

    default:
    cout<<"OK good by"<<endl;
        break;
    }

    return 0;
}