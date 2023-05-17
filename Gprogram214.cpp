#include<iostream>
using namespace std;

class Base
{
    public:
    int x,y;

    virtual void fun()
    {
        cout<<"base fun\n";
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
    void fun()
    {
        cout<<"derived fun\n";
    }

};
int main()
{
    Base bobj ;

    Base *bp = new Derived;

    bp->fun();
    bp->gun();

    cout<<"size of base"<<sizeof(Base)<<endl;
     cout<<"size of derived"<<sizeof(Derived)<<endl;

    return 0;
}