#include<iostream>
using namespace std;

class Demo
{
    public :
    int x,y ;

    Demo()
    {
        cout<<"inside default constructor\n";
    
        this->x=0;
        this->y =0;
    }
    Demo(int A ,int B)
    {
        cout<<"inside parametrised constructor\n";
        x=A;
        y=B;
    }
    Demo(Demo &ref)
    {
        cout<<"inside copy contructor \n";

        x=ref.x;
        y= ref.y;
        
    }
};

int main()
{
    Demo dobj;

    Demo dobj1(11,21);

    Demo dobj3(dobj1);
    


    return 0;
}