#include<iostream>
using namespace std;

class Demo
{
    public:
    int x;
    int y;

    Demo()
    {
        cout<<"Inside default constrictor\n";
        x=0;
        y=0;

    }
    Demo(int i,int j)
    {
        cout<<"inside parametrised constructor\n";

        x=i;
        y=j;
    }
    Demo(Demo &ref)
    {
        x= ref.x;
        y=ref.y;

        cout<<"inside copy constructor\n";

        cout<<x<<endl;
    }
    ~Demo()
    {
        cout<<"inside destructor";
    }
};
int main()
{
    Demo obj;

    Demo obj1(11,21);

    Demo obj2(obj1);


    return 0;
}