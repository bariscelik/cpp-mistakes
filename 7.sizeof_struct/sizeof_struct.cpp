#include <iostream>

typedef struct {
    int16_t num1;
    int16_t num2;
    int16_t num3;
    int16_t num4;
    int32_t num5;
} st1;

typedef struct {
    int16_t num1;
    int16_t num2;
    int16_t num3;
    int32_t num5;
    int16_t num4;
} st2;

int main()
{
    std::cout << "(short int) : " << sizeof(int16_t) << " byte" << std::endl;
    std::cout << "(int) : " << sizeof(int32_t) << " byte" << std::endl;
    std::cout << "(st1) : " << sizeof(st1) << " byte" << std::endl;
    std::cout << "(st2) : " << sizeof(st2) << " byte" << std::endl;

    return 0;
}
