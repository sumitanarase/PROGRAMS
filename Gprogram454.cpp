#include<iostream>
using namespace std;

class Demo
{
    public:
    int x,y;

    Demo(int a =0, int b =0)
    {
        x=a;
        y =b;
  }

};
Demo operator+(Demo op1 ,Demo op2)
{
    return(op1.x+op2.x,op2.y+op1.y);
}
int main()
{
    Demo obj1(1,2);
    Demo obj2(1,2);
    Demo robj(0,0);

    robj = obj1+obj2;
    cout<<robj.x<<endl;
    cout<<robj.y;

    return 0;
}