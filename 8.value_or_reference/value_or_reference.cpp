#include <iostream>

#define BAD

typedef struct
{
    std::string color;
} CAR;

#ifdef BAD
CAR setRed(CAR c)
{
    c.color = "red";
    return c;
}

int main()
{
    CAR myCar = { "blue" };
    myCar = setRed(myCar);
    std::cout << "myCar color : " << myCar.color << std::endl;

    return 0;
}
#else
void setRed(CAR& c)
{
    c.color = "red";
}

int main()
{
    CAR myCar = { "blue" };
    setRed(myCar);
    std::cout << "myCar color : " << myCar.color << std::endl;

    return 0;
}
#endif
