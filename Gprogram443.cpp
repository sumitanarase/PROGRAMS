#include<iostream>
using namespace std;

class Demo
{
    public:
    int x;

    static int y;

    static void fun()
    {
        cout<<"inside static fun";
    }


};
int Demo ::y=20;
int main()
{
   
Demo::fun();



    return 0;
}