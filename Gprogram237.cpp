#include<iostream>
using namespace std;

class Demo
{
    public:
    int x,y;

    Demo(int i =20 ,int j=30)
    {
        x=i;
        y=j;

    }

};
Demo operator +(Demo op)
{
    return op;

}
Demo operator -(Demo op)
{
    return Demo(-op.x,-op.y);

}

int main()
{
    Demo obj1(-11,-21);
    Demo obj2(-21,-51);
    Demo robj(0,0);

    robj = +obj1;
    cout<<robj.x<<endl;
    cout<<robj.y<<endl;

    robj = -obj2;
    cout<<robj.x<<endl;
    cout<<robj.y<<endl;


    return 0;
}