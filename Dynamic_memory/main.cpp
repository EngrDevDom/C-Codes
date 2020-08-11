/* using dynamic memory */
#include <iostream>
#include <string.h>

using namespace std;

int main(void)
{
    char *str1 = "learning about dynamic memory";
    char *str2 = new char[strlen(str1) + 1];

    strcpy(str2, str1);
    cout << "contents of str2 is: " << str2;
    delete []str2;

    return 0;
}
