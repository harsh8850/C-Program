// Making simple calculater
#include <iostream>
using namespace std;
int main()
{
    float num1, num2;
    char sign;
    cout << "Enter the number1" << endl;
    cin >> num1;
    cout << "Enter the sign" << endl;
    cin >> sign;
    cout << "Enter the number2" << endl;
    cin >> num2;
    switch (sign)
    {
    case ('+'):
        cout << num1 + num2 << endl;
        break;
    case ('-'):
        cout << num1 - num2 << endl;
        break;
    case ('*'):
        cout << num1 * num2 << endl;
        break;
    case ('/'):
        cout << num1 / num2 << endl;
        break;
    /*case '%':
        cout << num1 =% num2 << endl;   ( I am Finding error in this case......)
        break;*/

    default:
        cout << "sign not found" << endl;
        break;
    }
    return 0;
}
