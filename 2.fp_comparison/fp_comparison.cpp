#include <iostream>
#include <iomanip>

int main()
{
    float num = 5.7f;

    std::cout << std::setprecision(30) << num << std::endl;

    if (num == 5.7) {
        std::cout << "is equal " << 5.7 << std::endl;
    } else {
        std::cout << "is not equal " << 5.7 << std::endl;
    }

    return 0;
}
