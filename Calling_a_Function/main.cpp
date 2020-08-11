#include <iostream>

using namespace std;

int max(int num1, int num2);

int main()
{
    int a = 0;
    int b = 0;
    int ret;

    cout << "Enter value of a: " << endl;
    cin  >> a;

    cout << "Enter value of b: " << endl;
    cin  >> b;

    ret = max(a, b);
    cout << "Max value is: " << ret << endl;

    return 0;
}

int max(int num1, int num2)
{
    int result;

    if (num1 > num2)
        result = num1;
    else
        result = num2;

    return result;
}
