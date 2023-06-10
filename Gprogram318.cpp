#include<iostream>
using namespace std;

class Base
{
    public :
    int x,y;

   virtual int Addition(int a ,int b) = 0;

};
class Derived : public Base
{
    public:

    int Addition(int a , int b)
    {
        return a+b;
    }
};

int main()
{
    int iRet =0;
    Base *bp = new Derived();

    iRet = bp->Addition(11,21);

    cout<<iRet;

    

    return 0;
}