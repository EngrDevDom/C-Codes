#include <iostream>

using namespace std;

struct complex {double re, im;};

void reading_complex (complex *c)
{
    cout << "\nre = ";
    cin  >> c->re;

    cout << "\nim = ";
    cin  >> c->im;
}

complex sum_complex (complex a, complex &b)
{
    complex c;
    c.re = a.re + b.re;
    c.im = a.im + b.im;
    return c;
}

int main (void)
{
    complex c1, c2, s;
    reading_complex(&c1);
    reading_complex(&c2);

    s = sum_complex(c1, c2);
    cout << "\nc1 + c2 is: " << s.re << " +i*" << s.im;
}
