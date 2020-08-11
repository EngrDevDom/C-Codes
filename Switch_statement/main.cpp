#include <iostream>

using namespace std;

int main()
{
    char grade = 'D';

    switch (grade)
    {

    case 'A':
        cout << "Excellent!" << endl;
    break;

    case 'B':
        cout << "Good Job!" << endl;
    break;

    case 'C':
        cout << "Well done!" << endl;
    break;

    case 'D':
        cout << "You passed!" << endl;
    break;

    case 'E':
        cout << "Better try again." << endl;
    break;

    case 'F':
        cout << "Invalid grade." << endl;
    break;

    }

    cout << "Your grade is " << grade << "." << endl;

    return 0;
}
