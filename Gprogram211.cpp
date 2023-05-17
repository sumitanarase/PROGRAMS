#include<iostream>
using namespace std;

class Demo
{
    public:
    int x,y;
    static int z;

    Demo(int a =10,int b = 20)
    {

        cout<<"inside default constructor\n";

        this->x=a;
        this->y=b;
    }

    void fun(int no)
    {
        cout<<"inside non static fun\n";
        cout<<this->x<<endl;
        cout<<this->y<<endl ;
        cout<<Demo :: z<<endl;

    }

    static void gun(int value)
    {
        cout<<"inside static gun\n";


    }
    


};
int Demo ::z =10;


int main()
{
    
    cout<<Demo::z;
    Demo::gun(55);

    Demo obj(11);

    obj.fun(2);

    cout<<obj.x;
    cout<<obj.y;

    obj.gun(87);

    obj.z;




    return 0;
}