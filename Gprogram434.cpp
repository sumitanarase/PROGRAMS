#include<iostream>
using namespace std;

class Demo
{
    public:
    int iNo;

    Demo()
    {
        cout<<"inside default constructor";
    }
    void fun()
    {
        cout<<"inside fun";
    }
};

int main()
{
    Demo dobj;
    Demo*p = NULL;

    p = new Demo;

    p->fun();

    


    return 0;
}