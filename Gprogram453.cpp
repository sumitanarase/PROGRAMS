#include<iostream>
using namespace std;

class Hello
{
    public:
    void fun();
};
class Demo
{
    private:
    int i,j,k;

    Demo()
    {
        i=11;
        j=21;
        k=51;
    }
    //friend void  Hello ::fun();
    friend class Hello;
};

void Hello::fun()
{
    Demo dobj;

    cout<<dobj.i;

}
int main()
{
    Hello hobj;

    hobj.fun();


    return 0;
}