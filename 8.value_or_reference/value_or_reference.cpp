#include <iostream>

typedef struct
{
    std::string color;
} CAR;

CAR setRed(CAR c)
{
    c.color = "red";
    return c;
}

int main()
{
    CAR myCar = {"blue"};
    myCar = setRed(myCar);
    std::cout << "myCar color : " << myCar.color << std::endl;

    return 0;
}
