#include <cmath>
#include <iomanip>
#include <iostream>
#include <limits>

#define BAD

#ifdef BAD
int main()
{
    float num = 5.7f;
    std::cout << std::setprecision(30) << num << std::endl;

    if (num == 5.7)
        std::cout << "is equal to " << 5.7 << std::endl;
    else
        std::cout << "is not equal to " << 5.7 << std::endl;

    return 0;
}
#else

bool isEqual(float a, float b)
{
    return std::fabs(a - b) <= std::numeric_limits<float>::epsilon();
}

int main()
{
    float num = 5.7f;
    std::cout << std::setprecision(30) << num << std::endl;

    if (isEqual(num, 5.7))
        std::cout << "is equal to " << 5.7 << std::endl;
    else
        std::cout << "is not equal to " << 5.7 << std::endl;

    return 0;
}

#endif
