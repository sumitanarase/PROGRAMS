#include<iostream>

using namespace std;

class Demo
{
    public:
    int i;
    const int j;

    Demo(int a ,int b):j(b)
    {
        i=a;

    }
    void fun()
    {
        cout<<"inside fun\n";
        i++;
       // j++;
    }
    void gun(int a ,const int b) const
    {
        int x = 10;
        const  int y = 20;

        cout<<"inside gun\n";

       // i++;


    }


};

int main()
{
   
   Demo obj(11,21);


   const Demo obj2(11,20);
     
     obj.fun();
     obj.gun(10,20);

    // obj2.fun();
     obj2.gun(10,20);
   

    cout<<sizeof(Demo);
   


    return 0;
}