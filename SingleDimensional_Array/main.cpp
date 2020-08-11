/* working with single-dimensional array */
#include <iostream>

using namespace std;

int main(void)
{
    int nums[8] = {5, 7, -27, 22, -14, 72, 65, 99};
    float average = 0;

        for (int i=0; i<8; i++)
            average += nums[i];

            average /= 8;
            cout << "Average sum of the 8 integers is: " << average << endl;

    return 0;
}
