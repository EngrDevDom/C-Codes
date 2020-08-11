#include <iostream>

using namespace std;

main()
{
    int a = 5;
    int b = 20;

    if (a && b)
    {
        cout << "Line 1 - Condition is true" << endl;
    }

    if (a || b)
    {
        cout << "Line 2 - Condition is true" << endl;
    }

    a = 0;
    b = 10;

    if (a && b)
    {
        cout << "Line 3 - Condition is true" << endl;
    }

    else
    {
        cout << "Line 4 - Condition is not true" << endl;
    }

    if (!(a && b))
    {
        cout << "Line 5 - Condition is true" << endl;
    }

    return 0;
}
