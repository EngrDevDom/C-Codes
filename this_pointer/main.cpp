/*
 * @File          : Box
 * @Description	  : Compare the volume of 2 boxes using this pointer.
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

    if (Box1.compare(Box2))
    {
        cout << "Box2 is smaller than Box1." << endl;
    }
    else
    {
        cout << "Box2 is equal to or larger than Box1." << endl;
    }

    return 0;
}
