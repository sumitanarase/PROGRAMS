#include<iostream>
using namespace std;

class Demo
{
    public:
    int x,y;

    int Addition(int iNo1,int iNo2)
    {
        int ans =0;
        ans = iNo1+iNo2;
        return ans;

    }
        int Addition(int iNo1,int iNo2,int iNo3)
    {
        int ans =0;
        ans = iNo1+iNo2+iNo3;
        return ans;
        
    }
            int Addition(int iNo1,int iNo2,int iNo3 ,int iNo4)
    {
        int ans =0;
        ans = iNo1+iNo2+iNo3+iNo4;
        return ans;
        
    }

};

int main()
{
    Demo obj;
    int iRet =0;

    iRet = obj.Addition(11,21);
    cout<<"Additon is :"<<iRet;

     iRet = obj.Addition(11,21,51);
    cout<<"Additon is :"<<iRet;

     iRet = obj.Addition(11,21,51,101);
    cout<<"Additon is :"<<iRet;

    




    return 0; 
}
