#include<iostream>
using namespace std;

class Number
{
    public:
    int i;

int Fact(int iNo)
{
    int iCnt =0;
    int iFact =1;

    for(iCnt =1 ; iCnt<= iNo ; iCnt++)
    {
        iFact = iFact * iCnt;

    }
    return iFact;
}
};
int main()
{
    Number obj;
    int iValue =0;
    int iRet =0;

    cout<<"Enter Number :"<<endl;
    cin>>iValue;

    iRet = obj.Fact(iValue);

    cout<<"factorial is :"<<iRet<<endl;


    return 0;
}