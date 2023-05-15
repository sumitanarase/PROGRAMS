#include<iostream>

using namespace std;

class Demo
{
    public:
      int i ,j;
      static int x ;

      Demo(int a =10 ,int b = 20)
      {
            cout<<"inside constructor\n";

            this->i = a;
            this ->j = b;

      }
      void fun(int no)
      {
        cout<<"inside non static fun\n";
        cout<<this->i<<endl;
        cout<<this->j<<endl;
        cout<<Demo ::x <<endl;

      }
      static void gun(int value)
      {
        cout<<"Inside static gun\n";

       // cout<<this->i<<endl;
      }


};
int Demo ::x = 30;


int main()
{
    cout<<Demo ::x <<endl;
    Demo :: gun(11);

    Demo obj;

    obj.fun(0);
    cout<<"size is "<<sizeof(obj)<<endl;

    cout<<obj.i;
    cout<<obj.j;

    obj.gun(99);


    return 0;
}