#include<iostream>

using namespace std;

class Demo
{
    public:
    int x,y;

    static int i;

    Demo(int a = 9,int b =88)
    {
        cout<<"inside parametrised constructor\n";

    }
     void fun()
     {
        cout<<"inside fun\n";
     }

};
   int Demo ::i=77;
int main()
{
    cout<<Demo::i<<endl;
    


    return 0;
}