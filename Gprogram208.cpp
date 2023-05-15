#include<iostream>
using  namespace std;

class Base1
{
    public :
    int i,j ;
    Base1()
    {
        cout<<"base1 constructor\n";
    }
    ~Base1()
    {
        cout<<"base1 destructor\n";
    }
};
class Base2
{
    public:
    int u,k;

    Base2()
    {
        cout<<" base2 constructor\n";
    }
    ~Base2()
    {
        cout<<"base2 destructor\n";
    }


};
class Derived : public Base2,Base1
{
    public:
    int h,n;

    Derived()
    {
        cout<<"derived constructor\n";
    }
    ~Derived()
    {
        cout<<"derived destructor\n";
    }

};
int main()
{

    Derived dobj;

    return 0;
}