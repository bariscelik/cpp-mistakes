#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
    int* a = new int(10);
    std::cout << "before delete: " << *a << std::endl;
    delete a;
    std::cout << "after delete: " << *a << std::endl;

    return 0;
}
