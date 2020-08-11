/* Demonstrates structures that contain other structures. */
#include <iostream>

using namespace std;

struct coord {
                int x;
                int y;
};

struct rectangle {
                coord topleft;
                coord bottomright;
};

int main(void)
{
    int length, width;
    long area;
    rectangle box;

/* Input the coordinates */
    cout << "\nEnter the top left x coordinate: ";
    cin  >> box.topleft.x;

    cout << "\nEnter the top left y coordinate: ";
    cin  >> box.topleft.y;

    cout <<"Enter the bottom right x coordinate: ";
    cin  >> box.bottomright.x;

    cout << "\nEnter the bottom right y coordinate: ";
    cin  >> box.bottomright.y;

/* Calculate and display the length and width of the box */
    width = box.bottomright.x - box.topleft.x;
    length = box.bottomright.y - box.topleft.y;

    cout << "\nThe width is: " << width;
    cout << "\nThe length is: " << length;

/* Calculate and display the area */
    area = width * length;
    cout << "\nThe area is: " << area;
}


