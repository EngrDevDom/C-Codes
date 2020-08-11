#include <iostream>

using namespace std;

int main()
{
    int a = 10;

    do
    {
        if (a == 15)
        {
            a += 1;
            continue;
        }

        cout << "Value of a: " << a << endl;

        a += 1;

    } while (a < 20);

    return 0;
}
