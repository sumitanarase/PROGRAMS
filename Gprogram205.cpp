#include<iostream>
using namespace std;

class Demo
{

    public:
        int i;
    private:
        int j;
    protected:
        int k;
};

class Hello : public Demo
{

    public:
        int x;
    private :
        int y;
    protected:
        int z;
    public:
        void fun()
        {
            cout<<k<<endl;
        }
};

int main()
{

    Demo obj;

  // cout<<obj.i;
   
   //cout<<sizeof(Demo);
    return 0;
}