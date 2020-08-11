/* Demonstrates the use of operator & (addess) */
#include <iostream>

using namespace std;

int main(void)
{
    float var = 3.5;
    cout << "Value of variable var is: " << var << endl;
    cout << "Variable var occupies " << sizeof(var) << " bytes in memory" << endl;
    cout << "Variable var is located in memory at " << &var << " address " << endl;

    return 0;
}
