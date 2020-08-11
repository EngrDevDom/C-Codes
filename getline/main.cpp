#include <iostream>

using namespace std;

int main()
{
    int size = 20;
    char city[20];

    cout << "Enter City name: \n";
    cin >> city;
    cout << "City name: " << city << "\n\n";

    cout << "Enter City name again:\n";
    cin.getline(city,size);
    cout << "City name now: " << city << "\n\n";

    cout << "Enter another city name: \n";
    cin.getline(city,size);
    cout << "New City name: " << city << "\n\n";

    return 0;
}
