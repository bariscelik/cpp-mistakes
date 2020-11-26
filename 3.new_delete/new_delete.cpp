#include <iomanip>
#include <iostream>

#define BAD

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
#ifdef BAD
    throwedFunc();
#else
    try {
        throwedFunc();
    } catch (const char* ex) {
        std::cout << ex << std::endl;
    }
#endif
    delete a;
    return 0;
}
