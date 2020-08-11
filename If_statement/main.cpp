/* Demonstrates the use of if-statements */
#include <iostream>

using namespace std;

int main(void)
{
    int x, y;
    /* Input the two values to be tested */
    cout << "\nInput an integer value for x: ";
    cin  >> x;

    cout << "\nInput an integer value for y: ";
    cin  >> y;

    cout << "\n";

    /* Test values and print result */
    if (x == y)
        cout << "x is equal to y\n";

    else if (x > y)
        cout << "x is greater than y\n";

    else if (x < y)
        cout << "x is smaller than y\n";

    return 0;
}
