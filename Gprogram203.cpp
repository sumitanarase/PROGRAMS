#include<iostream>

using namespace std;

class  Demo
{
    int i;
    public:
    int x;
    private:
    int y;
    public:
    Demo()
    {
        x=10;
        y=20;
        i = 30;

    }
    void fun()
    {
        cout<<"inside public fun\n";
        cout<<y<<endl;        
       
       gun();
    }
    private:
    void gun()
    {
        cout<<"inside private gun\n";
        cout<<y<<endl;
         cout<<i<<endl;
    }
};
int main()
{
    
    Demo obj;
    obj.fun();

    cout<<obj.x;
   // cout<<obj.y;
  // cout<<obj.i;

  //obj.gun();

    


    return 0;
}