#include<iostream>

using namespace std;

class Summation
{
    public:
    int a,b;

    Summation(int x =10 )
    {
        x=a;
       

    }
    int Sum(int iNo)
    {
        int ans = 0;

        int iCnt = 0;
        int iSum = 0;

        for(iCnt = 1 ; iCnt<=iNo ; iCnt++)
        {
            iSum = iSum + iCnt;

            
        }
        return iSum;


    }
};
int main()
{
    Summation sobj;
    int iValue =0;
    int iret =0;

    cout<<"Enter the Number\n";
    cin>>iValue;

    Summation sobj1(iValue);

      iret = sobj.Sum(iValue);

    cout<<"Suumation is :"<<iret;


    return 0;
}