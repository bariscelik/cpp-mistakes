#include <iomanip>
#include <iostream>

#define BAD

using namespace std;

int main()
{
    int* a = new int(10);
    std::cout << "before delete: " << *a << std::endl;

    delete a;

#ifdef BAD
    std::cout << "after delete: " << *a << std::endl;
#else
    a = nullptr;

    if (a != nullptr)
        std::cout << "after delete: " << *a << std::endl;
#endif

    return 0;
}
