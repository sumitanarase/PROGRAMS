#include<iostream>
using namespace std;

class Demo
{
    public:
    int x,y;
    static  int i;

    static void gun(int i)
    {
        cout<<"inside gun\n";
    }


};

int Demo :: i = 20;

int main()
{
    cout<<Demo::i;
    Demo::gun(0);

    return 0;
}