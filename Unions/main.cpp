#include <iostream>

using namespace std;

union exUnion {
                char c;
                int i;
                float f;
};

int main(void)
{
    exUnion myVar;

    myVar.f = 0;
    cout << " c = " << myVar.c << ", i = " << myVar.i << ", f = " << myVar.f << endl;

    myVar.c = 97;
    cout << " c = " << myVar.c << ", i = " << myVar.i << ", f = " << myVar.f << endl;

}

