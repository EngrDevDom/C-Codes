#include <iostream>

using namespace std;

int main()
{
    int var;
    int *ptr;
    int val;

    var = 3000;

        ptr = &var;

        val = *ptr;

        cout << "Value of var: " << var << endl;
        cout << "Value of ptr: " << ptr << endl;
        cout << "Value of val: " << val << endl;

    return 0;
}
