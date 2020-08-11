/* A Simple Class */
#include <iostream>

using namespace std;

class point {

    int xVal, yVal;

    public:
            void set (int x, int y)     // inline
            {
                xVal = x;
                yVal = y;
            }

            int getx(void)
            {
                return xVal;
            }

            int gety(void);

            void move(int dx, int dy);
            void print(void);

};

inline int point::gety(void)            // inline
{
    return yVal;
}

void point::move(int dx, int dy)
{
    xVal += dx;
    yVal += dy;
}

void point::print(void)
{
    cout << "\nx = " << xVal;
    cout << "\ny = " << yVal;
}

int main(void)
{
    point p1, p2, *pp;
    p1.print();
    p1.set(5, 10);
    p1.print();
    p2 = p1;
    p2.print();
    p1.move(2, 3);
    p1.print();
    pp = &p1;

    cout << "\np1 has x = " << pp->getx();
    cout << "\np1 has y = " << pp->gety();
}
