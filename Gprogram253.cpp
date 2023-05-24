#include<iostream>
using namespace std ;

class Demo
{
    public:
    int x,y;

    Demo()
    {
        cout<<"inside default constructor\n";
        
        x=0;
        y= 0;

    }
    Demo(int i, int j)
    {
        cout<<"inside parametrised constructor\n";
        x=i;
        y=j;

    }
    Demo ( Demo  &ref)
    {
        cout<<"inside copy constructor\n";

        x=ref.x;
        y= ref.y;
    }

};

int main()
{
    Demo obj;

    Demo dobj1(11,21);

    Demo obj2(dobj1);



    return 0;
}