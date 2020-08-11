/* overloading functions */
#include <iostream>
#include <string.h>

using namespace std;

int sum (int a, int b)
{
    return a+b;
}

double sum (double a, double b)
{
    return a+b;
}

char * sum (char*a, char*b)
{
    return strcat(a, b);
}

int main(void)
{
    cout << "42 + 17 = " << sum(42, 17) << endl;
    cout << "42.0 + 17.0 = " << sum(42.0, 17.0) << endl;
    cout << " C++ is the best = " << sum("C++", " is the best!") << endl;
}
