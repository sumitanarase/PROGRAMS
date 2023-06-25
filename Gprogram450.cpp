#include<iostream>
using namespace std;

class Base
{
    public:
    int i,j;

    Base()
    {
        cout<<"inside base constructor\n";
    }
    virtual void fun()
    {
        cout<<"inside base virtual fun \n";

    }
    virtual void gun()
    {
        cout<<"virtual base gun"<<endl;
    }
    void run()
    {
        cout<<"inside run :\n";
    }
};

class Derived : public Base
{

    public :
    int x,y;

    void fun()
    {
        cout<<"inside der fun";
    }
    

};
int main()
{
    Base * bp = new Derived();

    bp->fun();
    


    return 0;
}