#include<iostream>
using namespace std;

class Base
{
    public:
    int x,y;

    Base()
    {
        cout<<"inside base constructor"<<endl;
    }

    virtual int sub(int a,int b)=0;
};
class Derived : public Base
{
    public:

    int sub(int a , int b)
    {
        int ans =0;
        ans = a-b;

        return ans;

    }
};
int main()
{
    //Base bobj;
    int iRet =0;
    Base * bp = new Derived();

   iRet =  bp->sub(21,1);

   cout<<" is "<<iRet;



    return 0;
}