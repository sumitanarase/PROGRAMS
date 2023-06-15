// accept number from user and check wheather number is armstrong number or not

#include<stdio.h>
#include<stdbool.h>

int Mult(int iNo1 ,int iNo2)
{
    int iMult =1;
    int iCnt =0;

    for(iCnt = 1; iCnt<=iNo2 ; iCnt++)
    {
        iMult = iMult * iNo1;
    }
    return iCnt;
}
bool CheckArmstrong(int iNo)
{
    int iDigit =0;
    int iDigCnt =0;
    int iRet = 0;
    int iSum = 0;

    int iTemp = 0;
    
    iTemp = iNo;
    while(iNo != 0)
    {
        iDigit = iNo  % 10;
        iDigCnt++;
        iNo = iNo /10;
    }
    iNo = iTemp;
    while(iNo != 0)
    {
        iDigit = iNo %10;
        iSum = iSum + Mult(iDigit , iDigCnt);
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
    int iValue1=0,iValue2=0;
    bool bRet;

    printf("Enter the Number :\n");
    scanf("%d",&iValue1);

    bRet = CheckArmstrong(iValue1);

    if(bRet == true)
    {
        printf("%d : Number is Armstrong\n",iValue1);
    }
    else
    {
         printf("%d : Number is not Armstrong\n",iValue1);
    }

    return 0;
}