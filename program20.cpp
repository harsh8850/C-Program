// continue table of 20 
#include <iostream>
using namespace std;
int main()
{
    int i, table, m;
    for (i = 1; i <= 20; i++)
    {
        for (m = 1; m <= 10; m++)
        {
            table = m * i;
            cout << table << endl;
        }
        cout << endl;
    }

    return 0;
}
