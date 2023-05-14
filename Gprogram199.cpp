#include<iostream>
using namespace std;

class Demo
{
  public:

    int Addition(int no1,int no2)
    {
        int ans =0;
        ans = no1 +no2;
        return ans;
    }
    int Addition(int no1 ,int no2 ,int no3)
    {
        int ans =0;
        ans = no1+no2+no3;
        return ans;
    }
    int Addition(int no1 ,int no2,int no3 ,int no4)
    {
        int ans =0;
        ans  = no1+no2+no3+no4;
        return ans;
    }


};

int main()
{
    Demo obj;
    int iRet  = 0;

    iRet = obj.Addition(10,11);
    cout<<"Addition of 1st is : "<<iRet<<endl;

    iRet=  obj.Addition(10,11,21);
    cout<<"Addition of 2nd is :"<<iRet<<endl;

    iRet= obj.Addition(10,11,21,51);
    cout<<"Addition of 3rd is :"<<iRet<<endl;

    return 0;
}