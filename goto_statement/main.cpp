#include <iostream>

using namespace std;

int main()
{
    int a = 10;

    LOOP:
        do
        {
            if (a == 15)
            {
                a += 1;
                goto LOOP;
            }

            cout << "Value of a: " << a << endl;
            a += 1;

        } while (a < 20);

    return 0;
}
