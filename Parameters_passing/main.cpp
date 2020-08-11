/* Parameters - passing by value & passing by reference */
#include <iostream>

using namespace std;

void swap1 (int x, int y)       // passing-by-value (objects)
{
    cout << "Function swap1" << endl;
    cout << "Initial values: x = " << x << ", y = " << y << endl;

        int temp = x;
        x = y;
        y = temp;
C:\Users\Dominic\Desktop\Skills\Programs
        cout << "Final values: x = " << x << ", y = " << y << endl;
}

void swap2 (int *x, int *y)     // pass-by-value (pointers)
{
    cout << "Function swap2" << endl;
    cout << "Initial values: x = " << *x << ", y = " << *y << endl;

        int temp = x;
        *x = *y;
        *y = temp;

        cout << "Final values: *x = " << *x << ", *y = " << *y << endl;
}

void swap3 (int &x, int &y)        // pass-by-reference
{
    cout << "Function swap3" << endl;
    cout << "Initial values: x = " << x << ", y = " << y << endl;

        int temp = x;
        x = y;
        y = temp;

        cout << "Final values: x = " << x << ", y = " << y << endl;
}

int main (void)
{
    int a, b;
    cout << "a = ";
    cin  >> a;

    cout << "b = ";
    cin  >> b;

    swap1 (a, b);
        cout << "a = " << a << ", b = " << b << endl;

    swap2 (&a, &b);
        cout << "a = " << a << ", b = " << b << endl;

    swap3 (a, b)
        cout << "a = " << a << ", b = " << b << endl;
}
