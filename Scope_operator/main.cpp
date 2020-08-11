/* Scope Operator */
#include <iostream>

using namespace std;

int x = 7;                                  // x is a global variable

int main(void)
{
    int x = 9;                              // x is local to main
    cout << "x = " << x << endl;            // refers to local of main x
    cout << "::x = " << ::x << endl;        // refers to global x

    {
        int x = 11;                         // x is local to main block
        cout << "x = " << x << endl;        // refers to local of block x
        cout << "::x = " << ::x << endl;    // refers to global x
    }
}
