#include <iostream>

using namespace std;

main()
{
    int a = 20;
    int b = 10;
    int c = 15;
    int d = 5;
    int e;

    e = (a+b)*c/d;
    cout << "Value of (a+b)*c/d is   : " << e << endl;

    e = ((a+b)*c/d);
    cout << "Value of ((a+b)*c/d) is : " << e << endl;

    e = (a+b)*(c/d);
    cout << "Value of (a+b*)*(c/d) is: " << e << endl;

    e = a+(b*c)/d;
    cout << "Value of a+(b*c)/d is   : " << e << endl;

    return 0;
}
