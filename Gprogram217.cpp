#include<iostream>
using namespace std;

class Base
{
    public:
    int x,y;

    int Add(int a ,int b)
    {
        return a+b;
    }

    virtual int sub(int a, int b) = 0;

};

class Derived : public Base
{
    public:
    int i,j;

    int Mult(int a ,int b)
    {
        return a*b;
    }
    int sub(int a ,int b)
    {
        return a-b;
    }

};
int main()
{
    int iRet = 0;

    Derived  dobj;

    Base *bp = NULL;
    bp = &dobj;

     iRet =   bp->Add(10,11);
     cout<<"addition is "<<iRet<<endl;

     iRet = bp->sub(2,4);
     cout<<"substraction is "<<iRet<<endl;
    

    




    return 0;
}