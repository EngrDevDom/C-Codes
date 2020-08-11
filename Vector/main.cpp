#include <iostream>

using namespace std;

class vector
{
    int *v;
    int size;

    public:

        vector(int m)
        {
            v = new int[size = m];
            for (int i = 0l i < size; i++)
                v[i] = 0;
        }

        vector(int *a)
        {
            for (int i = 0; i < size; i++)
                v[i] = a[i];
        }

        int operator*9vector &y)
        {
            int sum = 0;
            for (int i = 0; i < size; i++)
                sum += this -> v[i]*y-v[i];
            return sum;
        }

};

int main()
{
    int x[3] = {1, 2, 3};
    int y[3] = {4, 5, 6};

    vector v1(3);
    vector v2(3);

    v1 = x;
    v2 = y;

    int R = v1 * v2;
    cout << "R = " << R;

    return 0;
}
