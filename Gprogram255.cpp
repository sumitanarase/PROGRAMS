#include<iostream>
using namespace std;

class Demo
{
    public:
    int x,y;

    Demo()
    {
        cout<<"inside default constructor\n";

    }
    Demo(int i ,int j)
    {
        cout<<"inside parametrised constructor\n";
    }
    ~Demo()
    {
        cout<<"inside dstrcutor\n";
    }

    void Fun()
    {

        cout<<"inside fun\n";
    }

};

int main()
{
    Demo  obj;

    Demo *p = NULL;

    p = new Demo;

    p->Fun();
    p->Fun();


    delete p;




    return 0;
}