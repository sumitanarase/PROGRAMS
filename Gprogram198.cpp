#include<iostream>
using namespace std;

class Demo
{
    public:
    int x;
    int y;

    Demo()
    {
        cout<<"inside default constructor\n";
        x=0;
        y=0;
    }
    Demo(int i ,int j)
    {
        cout<<"inside parametrised constructor\n";
        x=i;
        y=j;
    }
    Demo(Demo &ref)
    {
        x= ref.x;
        y= ref.y;
        cout<<"inside copy constructor\n";
    }

    int Add()
    {
        int ians = 0;
        ians = x+y;

        return ians;
    }
    ~Demo()
    {
        cout<<"inside destructor\n";
    }



};

int main()
{
    int iNo1 =0;
    int iNo2 =0;
    int iRet =0;


    cout<<"Enter the Number \n";
    cin>>iNo1;

    cout<<"Enter the Number\n";
    cin>>iNo2;

    Demo obj1;
    Demo obj2(iNo1 ,iNo2);

    iRet = obj2.Add();
    cout<<"Addition is \n"<<iRet<<endl;


    

    return 0;
}