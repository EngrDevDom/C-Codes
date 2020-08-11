/* Demonstrates the use of Variable pointer */
#include <iostream>

using namespace std;

int main(void)
{
    int var1 = 7;
    int * ptr1;
    ptr1 = &var1;

    cout << "Value of variable ptr1 is: " << ptr1 << endl;
    cout << "Variable ptr1 point to " << *ptr1 << " value " << endl;

    return 0;
}
