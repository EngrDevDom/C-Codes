#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    float i, j;

    // set the seed
    srand((unsigned)time(NULL));

    /* Generate 10 random numbers. */
    for (i = 0; i < 10; i++)
    {
        // Generate actual random number.
        j = rand();
        cout << "Random Number: " << j << endl;
    }

    return 0;
}
