#include<iostream>
using namespace std;

class Base
{
    public:
    int i,j;

    Base()
    {
        cout<<"Base constructor\n";
    }
    ~Base()
    {
        cout<<"Base destructor\n";
    }
};
class D1 : public Base
{
    public:
    int k ,l;

    D1()
    {
        cout<<"inside d1 constructor\n";
    }
    ~D1()
    {
        cout<<"destructor D1\n";
    }

};
class D2 : public D1
{
    public :
    int i;

    D2()
    {
        cout<<"d2 constructor \n";
    }
    ~D2()
    {
        cout<<"d2 destructor\n";
    }
};
int main()
{
    D2 dobj;

    return 0;
}