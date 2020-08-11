/* Overloading operators */
#include <iostream>

using namespace std;

enum bool {false, true};

class point {int xVal, yVal

    public:
        point(int x = 0, int y = 0)
        {
            xVal = x;
            yVal = y;
        }

    void print(void);

    point& operator++O
    {
        xVal++;
        yVal++;
        return *this;
    }

    friend point& operator-(point&);

    point& operator = (point&p)
    {
        xVal = p.xVal;
        yVal = p.yVal;
        return *this;
    }

    bool operator = (point);

    friend point operator+ (point, point);

};

void point::print(void)
{
    cout << "\nx = " << xVal;
    cout << "\ny = " << yVal;
}

bool point::operator == (point p)
{
    if (p.xVal == xVal && p.yVal == yVal)
        return true;
}

point& operator--(point&p)
{
    p.xVal--;
    p.yVal--;
    return p;
}

point operator+(point p1, point p2)
{
    return point(p1.xVal + p2.xVal, p1.yVal + p2.yVal);
}

int main(void)
{
    point p1(2, 5), p2(7, 11), p3;
    p1++;
    p1.print();
    p3 = p1;

    if (p1 == p2)
        cout << "\npoints are identical";
    else
        cout << "\npoints are different";

    p3 = p1 + p2;
    p3.print();
}

