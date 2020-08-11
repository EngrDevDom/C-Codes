/* Demonstrates the unary operator prefix and postfix modes */
#include <iostream>

using namespace std;

int main(void)
{
    int a,b;

    /* Set a and b both equal to 5 */
    a = b = 5;

    /* Print them, decrementing each time. */
    /* Use prefix mode for b, postfix mode for a */

    cout << "\na = " << a-- << ", b = " << --b;
    cout << "\na = " << a-- << ", b = " << --b;
    cout << "\na = " << a-- << ", b = " << --b;
    cout << "\na = " << a-- << ", b = " << --b;
    cout << "\na = " << a-- << ", b = " << --b;

    return 0;
}
