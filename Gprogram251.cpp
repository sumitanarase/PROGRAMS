#include<iostream>
using namespace std;

class  Demo
{
   public:
   int x,y;

   Demo()
    {
        cout<<"inside default constructor\n";
        x=0;
        y=0;
    }
    Demo(int i ,int j)
    {
        cout<<"Parametrised constructor\n";
        x=i;
        y=j;

    }
    ~Demo()
    {
        cout<<"inside destructor\n";
    }

    int Add()
    {
        int ans = 0;
        ans = x+y;
        return ans;

    }

};

int main()
{
    int iValue1 =0 ,iValue2=0;

    int iRet =0;

    Demo  obj;

    cout<<"enter the first number\n";
    cin>>iValue1;

    cout<<"enter the second number\n";
    cin>>iValue2;
    
    Demo obj1;
    Demo obj2(iValue1,iValue2);

    iRet = obj2.Add();

    cout<<"Add is :"<<iRet;




    return 0;
}