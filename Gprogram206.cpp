#include<iostream>
using namespace std;

class Base
{
    public:
    int i,j;

    Base()
    {
        cout<<"inside destructor base\n";
    }
    ~Base()
    {
        cout<<"inside destrcutor base\n";
    }

};
class Derived : public Base
{
    public:
    int a,b,c;
     Derived()
     {
        cout<<"derived cunstructor\n";
     }
     ~Derived()
     {
        cout<<"destructor deriverd\n";
     }

};
int main()
{
    Derived dobj;

    

    return 0;
}