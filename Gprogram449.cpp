#include<iostream>
using namespace std;

class Demo
{
    public:
    int i,j;

    static int x;

    Demo(int a =10 ,int b=20)
    {
        cout<<"inside defafult constructor\n";
        this->i = a;
        this->j = b;
        
    }

    static void gun()
    {
        cout<<"inside static gun\n";
    }
};

int Demo::x =11;

int main()
{
    cout<<Demo::x;
   
   Demo::gun();



    return 0;
}