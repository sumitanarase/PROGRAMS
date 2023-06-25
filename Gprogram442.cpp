#include<iostream>
using namespace std;

class Demo
{
    public :
    int x,y;

    void gun()
    {
        cout<<"inside demo gun\n";
    }
};
class Derived : public Demo
{
    public:

    void fun()
    {
      gun();
    }
    
};

class D : public Derived,Demo
{
    public:

    void run()
    {
        fun();
    }

};

int main()
{
    D obj ;

    obj.fun();

    return 0;
}