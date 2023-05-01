#include<stdio.h>
// unsigned means only positive number we can send to function

typedef unsigned long int ULONG;
ULONG Power(int iNo1,int iNo2)
{
   ULONG iMult =1;

    for(register int iCnt =1;iCnt <= iNo2 ;iCnt++)
    {
        iMult = iMult * iNo1;
    }
    return iMult;
}
int main()
{
   ULONG iValue1,iValue2,iRet=0;

    printf("Enter the Base :\n");
    scanf("%d",&iValue1);

    printf("Enter the power :\n");
    scanf("%d",&iValue2);

    iRet = Power(iValue1,iValue2);

    printf("Result is : %ld",iRet);

    return 0;
}