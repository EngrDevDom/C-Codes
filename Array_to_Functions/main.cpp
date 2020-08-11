/* passing array to a function */
#include <iostream>

using namespace std;

void reading_array (int Array[10])
{
    for (int i=0; i<10; i++)
    {
        cout << "Array [" << i << "] = ";
        cin  >> Array[i];
    }
}

void printing_array (int Array[10])
{
    for (int i=0; i<10; i++)
        cout << "Array [" << i << "] = " << Array[i] << endl;
}

int main (void)
{
    int myArray[10];
    cout << "Reading values for myArray: " << endl;
    reading_array(myArray);

    cout << "\n";

    cout << "Printing values of myArray: " << endl;
    printing_array(myArray);
}
