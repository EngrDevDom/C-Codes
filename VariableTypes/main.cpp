#include <iostream>

using namespace std;

int main(void)
{
    cout << "\nA char   is " << sizeof(char) << " bytes";
    cout << "\nAn int   is " << sizeof(int) << " bytes";
    cout << "\nA short  is " << sizeof(short) << " bytes";
    cout << "\nA long   is " << sizeof(long) << " bytes";
    cout << "\nAn unsigned char  is " << sizeof(unsigned char) << " bytes";
    cout << "\nAn unsigned int   is " << sizeof(unsigned int) << " bytes";
    cout << "\nAn unsigned short is " << sizeof(unsigned short) << " bytes";
    cout << "\nAn unsigned long  is " << sizeof(unsigned long) << " bytes";
    cout << "\nA float  is " << sizeof(float) << " bytes";
    cout << "\nA double is " << sizeof(double) << " bytes";

    return 0;
}
