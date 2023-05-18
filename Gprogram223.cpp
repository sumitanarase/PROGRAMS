#include<iostream>

using namespace std;

class Hello
{
    public:

    void gun();
    void fun();


};

class Demo
{

    public:
    int i;
    protected:
    int j;
    private:
    int k;

    public:
    Demo()
    {
        i=10;
        j=20;
        k=30;
    }

    friend class Hello;

};

void Hello ::fun()
{
    Demo obj;
    cout<<obj.i<<endl;
    cout<<obj.j<<endl;
    cout<<obj.k<<endl;
  

}
void Hello :: gun()
{
    Demo obj1;
    cout<<obj1.i<<endl;
    cout<<obj1.j<<endl;
    cout<<obj1.k<<endl;
}

int main()
{
    Hello obj;

    obj.fun();
    obj.gun();

    

    return 0;
}