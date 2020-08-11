#include <iostream>

using namespace std;

int main(void)
{
    float x, y, result;
    char op;

    cout << "Input two reals: ";
    cin  >> x >> y;

    cout << "Specify the arithmetic operation (+, -, * or /): ";
    cin  >> op;

    switch (op) {

        case '+': result = x+y;
        break;

        case '-': result = x-y;
        break;

        case '*': result = x*y;
        break;

        case '/': result = x/y;
        break;

        default:
            cout << "unknown operator: " << op << '\n';

    }

    cout << "The result of " << op << " operation is: " << result;

    return 0;
}
