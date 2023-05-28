#include<iostream>
using namespace std;

class Demo
{
    public:
    int x ,y;

    Demo()
    {
        this->x = 19;
        this->y = 60;
    }

    private:

    void gun()
    {
        cout<<"inside gun\n";

    }

    friend void fun();

};

void fun()
{
    Demo obj;

    obj.gun();
    obj.x;
    obj.y;
}



int main()
{

    Demo donj;

    



    return 0;
}