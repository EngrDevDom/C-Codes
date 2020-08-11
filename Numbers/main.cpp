#include <iostream>

using namespace std;

int main()
{
    // Specifying formats with manipulators:
    int integer;

    // Decimal to Octal and Hex
    cout << "input a number in decimal: ";
    cin  >> integer;

        cout << "in octal is: " << oct << integer << endl;
        cout << "in hex is: " << hex << integer << endl;

    // Octal to Decimal and Hex
    cout << "input a number in octal: ";
    cin  >> oct >> integer;

        cout << "in decimal is: " << dec << integer << endl;
        cout << "in hex is: " << hex << integer << endl;

    return 0;
}
