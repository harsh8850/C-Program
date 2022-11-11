// program to check whether a character is alphabet or not
#include <iostream>
using namespace std;
int main()
{
    char character;
    cout << "Enter the character \n";
    cin >> character;
    if ((character >= 97 && character <= 122) || (character >= 65 && character <= 90))
    {
        cout << "Character is an ALPHABET \n";
    }
    else
    {
        cout << "Character is not  an ALPHABET \n";
    }

    return 0;
}
