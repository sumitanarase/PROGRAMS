#include<iostream>
using namespace std;

class Base
{
    public:
    int x,y;

    Base()
    {
        cout<<"inside default constructor\n";
        x=11;
        y=21;

    }
    void fun()
    {
        cout<<"Inside fun\n";
    }
    virtual void gun()
    {
        cout<<"inside base gun\n";
    }


};

class Derived : public Base
{
    public:
    int i,j;

    Derived()
    {
        cout<<"inside defULT dervied constructor\n";
    }
    virtual void gun()
    {
        cout<<"inside derived gun\n";
    }

};

int main()
{
    Base bobj;

    Base * bp = new Derived();

    bp->gun();
    

    return 0;
}