#include<stdio.h>
#include<stdbool.h>

bool  CheckArmstrong(int iNo)
{
    int iDigit =0;
    int iDigCnt =0;
    int iTemp =0;
    int iSum =0;
    int iCnt =0;
    int Mult =0;

    iTemp = iNo;

    while(iNo != 0)
    {
        iDigit = iNo %10;
        iDigCnt++;
        iNo = iNo /10;

    }

    iNo = iTemp;

    while(iNo != 0)
    {
        Mult =1;
        iDigit = iNo %10;
     for(iCnt=1;iCnt<=iDigCnt;iCnt++)
      {
        Mult = Mult * iDigit;
      }
     iSum = iSum+ Mult;
        iNo = iNo/10;

    }

    if(iSum == iTemp)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int iValue =0;
    bool bRet;

    printf("Enter the Number :\n");
    scanf("%d",&iValue);

    bRet = CheckArmstrong(iValue);

    if(bRet == true)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }


    return 0;
}