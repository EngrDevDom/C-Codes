#include <iostream>

// Function declaration
void func(void);

static int count = 10;

main()
{
    while (count--)
    {
        func();
    }

    return 0;
}

void func(void)
{
    static int i = 4;

    i++;

    std::cout << "i is " << i;
    std::cout << " and count is " << count << std::endl;
}
