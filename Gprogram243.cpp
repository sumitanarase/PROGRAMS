#include<iostream>

namespace Marvellous
{
    void fun()
    {
        std::cout<<"inside fun marvellous\n";
    }
}
namespace Infosystems
{
    void fun()
    {
        std::cout<<"inside fun infosystem\n";
    }
}
int main()
{
    using namespace Marvellous;
    using namespace Infosystems;

    Infosystems::fun();
    Marvellous::fun();
    


    return 0;
}