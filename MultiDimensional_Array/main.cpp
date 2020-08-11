/* working with multi-dimensional array */
#include <iostream>

using namespace std;

int main()
{
    int matrix[3][4] = { {10, 20, 30, 40},
                         {50, 60, 70, 80},
                         {90, 100, 110, 120} };

    int row, col;

        for (row=0; row<3; row++)
            for (col=0; col<4; col++)
                cout << "matrix[" << row << "][" << col << "]= " << matrix[row][col] << endl;

    return 0;
}
