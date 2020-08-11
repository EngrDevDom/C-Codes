/* A simple function definition */
#include <iostream>
#include <string.h>

long area (int length, int width);          // function area prototype

using namespace std;

int main(void)
{
    int len, wid;
    long Area;

    cout << "Input the rectangle length: ";
    cin  >> len;

    cout << "Input the rectangle width: ";
    cin  >> wid;

    Area = area(len, wid);                     // function area call

    cout << "Area = " << Area;

    return 0;
}

// function area definition
long area (int length, int width)               // function area header
{
    long Area;
    Area = length*width;
    return (Area);
}
