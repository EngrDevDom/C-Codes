/*
 * @File          : Object Count
 * @Description	  : Static members of a class.
 * @Last Modified : 17/02/2020
 * @Author        : Engr.Dom
 */

#include <iostream>

using namespace std;

class Box
{
    public:
        static int objectCount;
        // Constructor definition
        Box(double l = 2.0, double b = 2.0, double h = 2.0)
        {
            cout << "Constructro called." << endl;
            length = l;
            breadth = b;
            height = h;
            // Increase every time object is created
            objectCount++;
        }

        double Volume()
        {
            return length * breadth * height;
        }

    private:
        double length;      // Length of a box
        double breadth;     // Breadth of a box
        double height;      // Height of a box
};

// Initialize static member of class Box
int Box::objectCount = 0;

int main(void)
{
    Box Box1(3.3, 1.2, 1.5);    // Declare Box1
    Box Box2(8.5, 6.0, 2.0);    // Declare Box2

    // Print total number of objects.
    cout << "Total objects: " << Box::objectCount << endl;

    return 0;
}
