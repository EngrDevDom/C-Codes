/* Example for Overloading */
#include <iostream>

using namespace std;

void g(int a)
{
    cout << "\nfunction 1 with argument: " << a;
}

void g(double a)
{
    cout << "\nfunction 2 with argument: " << a;
}

int main()
{
    int i   = 5;
    float r = 2.5;
    char c  = 'a';
    long lg = 10000;

    g(i);   // call of function 1
    g(r);   // call of function 2 - conversion float -> double
    g(c);   // call function 1    - conversion char  -> int
    g(lg);  // error              - ambiguity between g(int) and g(double)
}
