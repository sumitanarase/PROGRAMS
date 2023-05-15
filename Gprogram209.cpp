#include<iostream>
using namespace std;


class Demo
{
    public:
    int i,j;
    static int x;

    Demo()
    {
        cout<<"inside default construcotr\n";

        i= 10;
        j=20;
        x =9;
    }
};
 int Demo ::x=99;
int main()
{

    cout<<Demo ::x;
    Demo obj;

    Demo obj1;
    Demo obj2;


    cout<<sizeof(obj1);
    cout<<sizeof(obj2);
 

    return 0;
}