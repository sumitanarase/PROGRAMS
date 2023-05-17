#include<iostream>

using namespace std;

class Demo
{
    public:
    int i;
    private:
    int k;
    protected:
    int j;

    public:
      Demo()
      {
        i=10;
        j =20;
        k = 30;
      }

      friend void fun();
};
 void fun()
 {
    Demo obj1;
    cout<<obj1.i<<endl;
    cout<<obj1.j<<endl;
    cout<<obj1.k<<endl;

 }
int main()
{
    fun();


    return 0;
}