#include<iostream>
using namespace std;

class Demo
{
    public:
    int x,y;

    static int i;

    void gun()
    {
        cout<<"inside gun\n";
    }

};
int Demo :: i = 10;

int main()
{
    cout<<Demo::i;
    Demo dobj;
    dobj.gun();

   return 0;
}