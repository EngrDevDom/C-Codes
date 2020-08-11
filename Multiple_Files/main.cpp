#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream fout;
    fout.open("Country");
    fout << "United states of America\n";
    fout << "United Kingdom";
    fout << "South Korea";
    fout.close();

    fout.open("Capital");
    fout << "Washington\n";
    fout << "London\n";
    fout << "Seoul\n";
    fout.close();

    const int N = 80;
    char line[N];

    ifstream fin;
    fin.open("Country");
    cout << "Contents of country file\n";

    while(fin)
    {
        fin.getline(line,N);
        cout << line;
    }

    fin.close();
    fin.open("Capital");
    cout << "Contents of capital file";

    while(fin)
    {
        fin.getline(line,N);
        cout << line;
    }

    fin.close();

    return 0;
}
