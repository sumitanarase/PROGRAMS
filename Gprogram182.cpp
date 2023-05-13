#include<iostream>
using namespace std;

class NonFactor
{
    public:
    int iNo;

    NonFactor()
    {
        iNo =0;
    }
    NonFactor(int A)
    {
        iNo = A;
    }
    ~NonFactor()
    {
        printf("Destructor");
    }
     
     int NF()
     {
        int iSum =0;
        for(int iCnt =1;iCnt<iNo;iCnt++)
        {
            if(iNo % iCnt  != 0)
            {
                iSum = iSum + iCnt;
            }

        }
        return iSum;
     }


    

};
int main()
{
    NonFactor obj;
    int iValue = 0;
    int iRet =0;

    cout<<"Enter the Number";
    cin>>iValue;

    NonFactor obj1;
    
    NonFactor obj2(iValue);

    iRet = obj2.NF();
    cout<<" = "<<iRet<<"\n";





    return 0;
}