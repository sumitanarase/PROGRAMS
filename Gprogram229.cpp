#include<iostream>
using namespace std;

class Demo
{

    public:

    inline int Addition(int ino1,int ino2)
    {
        int ans  =0;
        ans = ino1+ino2;

        return ans;
    }
};

int main()
{
    Demo obj;
    int iret = 0;
    iret = obj.Addition(10,11);

    cout<<"Addition is \n"<<iret;

    cout<<sizeof(obj);


    return 0;
}