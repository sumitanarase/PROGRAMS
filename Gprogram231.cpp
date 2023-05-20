#include<iostream>
using namespace std;

class Demo
{
    public:
    int Add(int no1,int no2);
    inline int Sub(int no1,int no2);
};

int Demo ::Add(int no1,int no2)
{
    int ans = 0;
    ans  = no1 +no2;
    return ans;
}
int Demo ::Sub(int no1 ,int no2)
{
    int ans  =0;
    ans = no1-no2;
    return ans;
}

int main()
{
    Demo obj;
    int iret =0;

    iret = obj.Add(10,20);
    cout<<"addition is \n"<<iret;

    iret = obj.Sub(20,10);
    cout<<"substraction is \n"<<iret;



    return 0;
}