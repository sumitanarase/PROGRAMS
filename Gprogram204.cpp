#include<iostream>
using namespace std;

class Base
{
    public:
    int x,y;
    
    Base()
    {
        cout<<"inside base constructor\n";
    }
    ~Base()
    {
        cout<<"inside  base desctructor\n";
    }
    void fun()
    {
        cout<<"inside base fun\n";
    }

};
class Derived : public Base
{
    public:
    int i,j;

    Derived()
    {
        cout<<"inside derived constructor\n";
    }
    ~Derived()
    {
        cout<<"inside  derived destrcutor\n";
    }
    void gun()
    {
        cout<<"inside dervied gun\n";
        
    }

};
int main()
{
    Derived obj;

    obj.fun();
    obj.gun();

    return 0;
}