#include<iostream>
using namespace std;
class Demo
{
    public :
    int x,y;

    Demo(int i =10,int j=20)
    {
        x=i;
        y=j;
    }
};

Demo operator +(Demo op1,Demo op2)
{
    return Demo(op1.x + op2.x, op1.y+op2.y);
}

int main()
{
    int igg = 0;
    Demo bobj (11,21);
    Demo robj(10,20);

    Demo i(0,0);

    i= bobj+robj;

    cout<<i.x;
    cout<<i.y;

  //  cout<<i;



    return 0;
}