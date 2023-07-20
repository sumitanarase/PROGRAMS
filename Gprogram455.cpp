#include<iostream>

namespace Sumit
{

    void Fun()
    {
        std::cout<<"inside fun sumit \n";
    }
}
namespace Shree
{

    void gun()
    {
        std::cout<<"inside gun shree \n";
    }
}

int main()
{
    using namespace Sumit;

    Sumit::Fun();


    return 0;
}