/* Palindrome Number Program */
#include <iostream>
#include <conio.h>

using namespace std;

int main(void)
{
    int a, no, b, temp = 0;

    cout << "Enter any number: ";
     cin >> no;

     b = no;

        while (no > 0)
        {
            a  = no % 10;
            no = no / 10;
            temp = temp*10 + a;
        }

        if (temp == b)
        {
            cout << "Number is palindrome!";
        }

        else
        {
            cout << "Number is not palindrome!";
        }

    getch();
}
