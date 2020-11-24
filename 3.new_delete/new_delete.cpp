#include <iomanip>
#include <iostream>

class A {
public:
    A()
    {
        std::cout << "ctor" << std::endl;
    }
    ~A()
    {
        std::cout << "dtor" << std::endl;
    }
};

void throwedFunc() noexcept(false)
{
    throw "exception";
}

int main()
{
    A* a = new A();
    throwedFunc();
    delete a;
    return 0;
}
