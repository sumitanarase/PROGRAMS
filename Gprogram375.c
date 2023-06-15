#include<stdio.h>

typedef unsigned long int ULONG;
ULONG Power(int iNo1, int No2)
{
    int iCnt =0;
      ULONG iMult =1;

    for(iCnt=1;iCnt<=iNo1;iCnt++)
    {
        iMult = iMult * No2;

    }
    return iMult;
}
int main()
{
    int iValue1=0,iValue2=0;
    int iRet =0;

    printf("Enter the Power :\n");
    scanf("%d",&iValue1);

    printf("Enter the Base :\n");
    scanf("%d",&iValue2);

    iRet = Power(iValue1,iValue2);
    printf("Power is : %d",iRet);

    return 0;
}