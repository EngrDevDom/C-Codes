/* Demonstrates variables and constants */

#include <iostream>

using namespace std;

/* Define a constant to convert from pounds to grams */
#define GRAMS_PER_POUNDS 454

/* Define a constant for the start of the next century */
const int grams_per_kilo = 1000;

int main(void)
{
    /* Declare the needed variables */
    long weight_in_grams, weight_in_pounds;
    float weight_in_kilos;

    /* Input data from user */
    cout << "Enter your weight in pounds: ";
    cin  >> weight_in_pounds;

    /* Perform conversions */
    weight_in_grams = weight_in_pounds * GRAMS_PER_POUNDS;
    weight_in_kilos = (float) weight_in_grams / grams_per_kilo;

    /* Display results on the screen */
    cout << "\n The weight in grams = " << weight_in_grams << endl;
    cout << "\n The weight in kilos = " << weight_in_kilos << endl;


    return 0;
}
