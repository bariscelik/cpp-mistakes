#include <iomanip>
#include <iostream>

int* getNumber()
{
    int num = 10;
    return &num;
}

int main()
{
    int number = *getNumber();

    return 0;
}
