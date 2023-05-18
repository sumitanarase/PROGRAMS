#include<iostream>

using namespace std;

class Demo
{

    public:
    int i;
    const int j;

    Demo() : j(20)
    {
        cout<<"inside ";
        i=10;
       // j=20;
    }
    int sum()
    {
        return i+j;
    }


};

int main()
{
     Demo obj;
     int iRet =0;

    cout<<obj.i<<endl;
    cout<<obj.j<<endl;
    
    iRet = obj.sum();
    cout<<iRet;



    return 0;
}