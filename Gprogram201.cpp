#include<iostream>

using namespace std;

class Demo
{
    public:
    int x;
    int y;

    Demo(int a = 11 ,int b=20)
    {
        x=a;
        y=b;
    }
    void fun()
    {
        cout<<"inside fun"<<endl;
        this->x;
        this->y;
        cout<<this<<endl;
        cout<<y;
    }
};

int main()
{
    Demo obj;

    Demo obj2(10);
    Demo obj3(55,56);

    obj.fun();
   

    return 0;
}