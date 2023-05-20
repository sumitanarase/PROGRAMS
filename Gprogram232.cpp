#include<iostream>

using namespace std;

class Demo
{
    public:
    int x,y;

    Demo(int i =10,int j=20)
    {
        x=i;
        y=j;
    }


};

Demo operator + (Demo op1 ,Demo op2)
{

    cout<<"inside + operator\n";

    return Demo(op1.x +op2.y , op1.y+op2.x);
}

int main()
{
    Demo obj1(11,21);
    Demo obj2(51,101);
    Demo robj(0,0);

    robj = obj1 +obj2;
    cout<<robj.x<<endl;
    cout<<robj.y<<endl;


    return 0;
}