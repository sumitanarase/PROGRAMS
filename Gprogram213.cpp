#include<iostream>

using namespace std;

class Base
{
    public:
     int x,y;

     void fun()
     {
        cout<<"Base fun\n";
     }
     void gun()
     {
        cout<<"base gun\n";
     }

};

class Derived : public Base
{
    public:
    int i,j;

    void sun()
    {
        cout<<"inside sun\n";
    }
    void gun()
    {
        cout<<"parammetrised gun\n";
    }

};

int main()
{

    Base bobj;
    Derived  dobj;

    Base *bp = new Derived();
    bp->gun();
    bp->fun();



    return 0;
}