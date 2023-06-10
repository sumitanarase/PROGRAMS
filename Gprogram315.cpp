#include<iostream>
using namespace std;

class Demo
{
    public:
    int x,y;

    Demo()
    {
        cout<<"inside default constructor\n";
        x=0;
        y =0 ;

    }
    Demo(int i ,int j)
    {
        i = x;
        j= y;
        cout<<"inside parametrised constructor\n";
    }
    Demo( Demo  &ref)
    {
        cout<<"Inside copy constructor\n";
        x = ref.x;
        y=ref.y;
    }

    int Addition(int iNo1,int iNo2)
    {
        int ans = 0;
        ans = iNo1 + iNo2;

        return ans;
    }

};
int main()
{
    int iValue = 0; 
    int iRet =0;
    int ivalue = 0;

    cout<<"Enter the Number\n";
    cin>>ivalue;

    cout<<"Enter the Number\n";
    cin>>iValue;

    Demo dobj;

    Demo dobj1(ivalue,iValue);

    Demo dobj2(dobj1);


    iRet = dobj1.Addition(ivalue,iValue);

    cout<<"Addition is "<<iRet;



    return 0;
}