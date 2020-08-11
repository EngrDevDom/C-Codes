/* Example for inheritance */

#include <iostream>
using namespace std;

class point {

    protected:
        int xVal, yVal;

    public:
        point(int x = 0, int y = 0)
        {
            xVal = x; yVal = y;
        }

        void move(int x, int y)
        {
            xVal += x;
            yVal += y;
        }

        void print(void);

};

class circle : public point
{
    int radius;

    public:
            circle(int x = 0, int y = 0, int r = 0) : point(x, y)
            {
                radius = r;
            }

            double area(void);

            void changeRadius(int r)
            {
                radius += r;
            }

            void print(void);
};

void point :: print(void)
{
    cout << "\nx = " << xVal;
    cout << "\ny = " << yVal;
}

void circle :: print(void)
{
    cout << "\nx = " << xVal;
    cout << "\ny = " << yVal;
    cout << "\nradius = "<< radius;
}

double circle :: area(void)
{
    return (3.14*radius*radius);
}

int main(void)
{
    circle c1(5, 10, 20);
    c1.move(1, 2);
    c1.print();

    cout << "\nArea = " << c1.area();
}
