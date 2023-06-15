#include<stdio.h>
#include<stdbool.h>

bool CheckArmstrong(int iNo)
{
    int iDigit =0;
    int iDigCnt =0;
    int iTemp =0;
    int iCnt =0;
    int iSum = 0;
    int iMult =0;

    iTemp = iNo;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iDigCnt++;
        iNo = iNo /10;

    }

    iNo  = iTemp;

    while(iNo != 0)
    {
        iMult = 1;
        iDigit = iNo %10;

        for(iCnt =1 ;iCnt<=iDigCnt ; iCnt++)
        {
            iMult = iMult * iDigit;

        }

        iSum = iSum +iMult;

        iNo = iNo/10;
        
        
    }
    if(iTemp == iSum)
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
    int iValue=0;
    bool bRet;

    printf("Enter the Number :\n");
    scanf("%d",&iValue);

    bRet = CheckArmstrong(iValue);

    if(bRet == true)
    {
        printf("Number is Armstrong ");
    }
    else
    {
        printf("NUmber is not Armstrong");
    }


    return 0;
}