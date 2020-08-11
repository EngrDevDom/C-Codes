#include <iostream>

using namespace std;

int main()
{
    int a = 10;

    do
    {
        cout << "Value of a: " << a << endl;
        a += 1;

        if (a > 15)
        {
            break;
        }

    } while (a < 20);

    return 0;
}
