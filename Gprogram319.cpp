#include<iostream>
using namespace std;

class Demo
{
    public:
    int x,y;

    void gun()
    {
        cout<<"inside gun\n";
    }

    friend void fun();

};

void fun()
{
    Demo dobj;
    dobj.gun();
}

int main()
{
    fun();

    return 0;
}