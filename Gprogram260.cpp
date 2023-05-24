#include<iostream>
using namespace std;

class Base
{
    public:
    int x,y;

    void fun()
    {

        cout<<"inside fun\n";
    }
};
class Dervied : public Base
{
    public:
    int i,j;

    void gun()
    {
        cout<<"inside fun\n";

        fun();
    }
    

};

int main()
{
    Dervied dobj;

    dobj.gun();
    dobj.fun();

    return 0;
}