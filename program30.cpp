// Write a program to find whether an alphabet is a vowel or a consonant.
#include <iostream>
using namespace std;
int main()
{
    char vowel;
    cout << "Enter the Alphabates" << endl;
    cin >> vowel;
    switch (vowel)
    {
    case ('a'):
        cout << "Vowel" << endl;
        break;
    case ('e'):
        cout << "Vowel" << endl;
        break;

    case ('i'):
        cout << "Vowel" << endl;
        break;

    case ('o'):
        cout << "Vowel" << endl;
        break;

    case ('u'):
        cout << "Vowel" << endl;
        break;

    default:
    cout<<"consonant"<<endl;
        break;
    }
    return 0;
}
