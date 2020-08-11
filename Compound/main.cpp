/* using compound statements */
#include <iostream>

using namespace std;

int main(void)
{
    int a, b, c;

    a = 2, b = 5;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    {
        c = a*b;
        cout << "c = " << c << endl;

    }

    cout << "c = " << c << endl;

    return 0;
}
