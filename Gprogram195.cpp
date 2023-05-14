#include<iostream>

using namespace  std;

class  Demo
{
    public:

    int iNo;
    int ino;

    Demo()
    {
        cout<<"inside default constructor\n";
    }

    ~Demo()
    {
        cout<<"inside destructor\n";
    }

    void Fun()
    {
        cout<<"inside function\n";
    }
};

int main()
{
    Demo obj;

    Demo *ptr = NULL;

    ptr = new Demo ;

    obj.Fun();

    ptr->Fun();

    delete ptr;

    return 0;
}
