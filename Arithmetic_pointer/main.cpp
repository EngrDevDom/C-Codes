/* Demonstrates the use of Arithmetic pointer */
#include <iostream>

using namespace std;

int var1 = 7, var2 = 100;

int main(void)
{
    int * ptr;
    ptr = &var1;

    cout << "ptr point to " << *ptr << endl;
    cout << "ptr+1 point to " << *(ptr+1) << endl;

    return 0;
}
