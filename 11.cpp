#include<iostream>
using namespace std;

class Base
{
    public:
    int iNo1;
    int iNo2;

    Base()
    {
        cout<<"inside default constructor\n";
        
        iNo1 = 0;
        iNo2 = 0;

    }
    Base(int A, int B)
    {
        cout<<"inside parametrised constructor\n";
        iNo1 = A;
        iNo2 = B;

    }
    ~Base()
    {
        cout<<"destrucotr\n";
    }
    void fun()
    {
        cout<<"inside fun\n";
    }

};
class Derived
{
    public:
    int x,y;

    Derived()
    {
        cout<<"inside Derived constructor\n"; 
        x=0;
        y=0;

    }
    Derived(int A, int B)
    {
        cout<<"inside Derived parametrsid constructor\n";
        x=A;
        y=B;
    }
    ~Derived()
    {
        cout<<"destrcutor\n";
    }

    void gun()
    {
        cout<<"inside gun\n";
    }

};
class Derived1 : public Base , Derived
{
    public:
    int a;

    Derived1()
    {
        cout<<"default Derived1 constructor\n";
    }
    Derived1(int A)
    {
        cout<<"default derived parametrised constructor\n";
        a = A;
    }
    ~Derived1()
    {
        cout<<"destructor\n";
        
    }
    void Run()
    {
        cout<<"inside run\n";
    }


};
int main()
{
    Derived1 dobj1;


    return 0;
}