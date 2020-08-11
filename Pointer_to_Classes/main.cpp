/*
 * @File          : Box
 * @Description	  : Compare the volume of 2 boxes using pointer to c++ classes.
 * @Last Modified : 17/02/2020
 * @Author        : Engr.Dom
 */

#include <iostream>

using namespace std;

class Box
{
    public:
        // Constructor definition
        Box(double l = 2.0, double b = 2.0, double h = 2.0)
        {
            cout << "Constructor called. " << endl;
            length = l;
            breadth = b;
            height = h;
        }

        double Volume()
        {
            return length * breadth * height;
        }

        // this pointer
        int compare(Box box)
        {
            return this -> Volume() > box.Volume();
        }

    private:
        double length;      // Length of a box
        double breadth;     // Breadth of a box
        double height;      // Height of a box
};

int main(void)
{
    Box Box1(3.3, 1.2, 1.5);    // Declare Box1
    Box Box2(8.5, 6.0, 2.0);    // Declare Box2
    Box *ptrBox;                // Declare pointer to a class.

    // Save the address of first object
    ptrBox = &Box1;

    // Now try to access a member using member access operator
    cout << "Volume of Box1: " << ptrBox -> Volume() << endl;

    // Save the address of first object
    ptrBox = &Box2;

    // Now try to access a member using member access operator
    cout << "Volume of Box2: " << ptrBox -> Volume() << endl;

    return 0;
}
