/* using static variable */
#include <iostream>

using namespace std;

int func(void)
{
    static int m = 5;
    cout << "m = " << m << endl;

    m++;
    cout << "m = " << m << endl;
}

int main(void)
{
    cout << "First call of function: " << endl;
    func();

    cout << "Second call of function: " << endl;
    func();
}

