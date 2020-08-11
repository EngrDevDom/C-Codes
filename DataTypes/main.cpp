#include <iostream>

using namespace std;

int main(void)
{
    cout << "It will be printed different type of data:\n";
    cout << "string: " << "abcd" << endl;
    cout << "char: " << 'a' << endl;
    cout << "char: " << char(97) << endl;
    cout << "non-printing char (escape):" << char(27) << endl;
    cout << "integer: " << 123 << endl;
    cout << "long: " << -1234567 << endl;
    cout << "double: " << 123.456 << endl;
    return 0;
}
