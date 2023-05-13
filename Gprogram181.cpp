#include<iostream>
using namespace std;

class Arithmatic
{
    public:
    int iNo1;

    Arithmatic()
    {
        iNo1 =0;
    }
    Arithmatic(int A)
    {
        iNo1 = A;

    }
    ~Arithmatic()
    {
        printf("Destructor");
    }

int MultFact()
{
    int iCnt=0;
    int iMult=1;

    for(iCnt =1;iCnt<=(iNo1/2);iCnt++)
    {
        if((iNo1%iCnt) == 0)
        {
            iMult=iMult*iCnt;
            
        }
    }
    return iMult;
}
};
int main()
{
    Arithmatic obj;
    int iValue1=0;

    int iRet =0;

    cout<<"Enter the NUmber ";
    cin>>iValue1;

    Arithmatic obj1;
    Arithmatic obj2(iValue1);

    iRet = obj2.MultFact();
    cout<<"is :"<<iRet<<"\n";
    



    return 0;
}