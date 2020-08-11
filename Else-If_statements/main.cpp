/* Demonstrates the use of nested else-if statements */
#include <iostream>

using namespace std;

int main(void)
{
    char ch;
    cout << "Input a character: ";
    cin  >> ch;

    if (ch >= '0' && ch <= '9')
        cout << "The character is a digit.";

    else
        if (ch >= 'A' && ch <= 'Z')
            cout << "The character is an upper letter.";

        else
            if (ch >= 'a' && ch <= 'z')
                cout << "The character is a lower letter.";

            else
                cout << "The character is a special character.";

    return 0;
}
