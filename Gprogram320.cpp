#include<iostream>
using namespace std;

class Demo
{
    public:

    void gun();

};
class Base
{
    public:

    void fun()
    {
        cout<<"inside fun\n";
    }

    friend class Demo;

};



int main()
{
    Demo obj;

    obj.gun();

    return 0;
}