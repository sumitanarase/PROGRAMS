#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

int iMult(int base , int power)
{
    int iCnt =0;
    int iMult =1;
    
    for(iCnt = 0; iCnt<power ; iCnt++)
    {
        iMult = iMult * base;

    }
    return iMult;
}
bool Check(int iNo)
{
    int iDigit =0;
    int iDigCnt =0;
    int iSum = 0;

    int iTemp = 0;

    iTemp = iNo;

    while(iNo != 0)
    {
        iDigit = iNo  % 10 ; 
        iDigCnt++;
        iNo = iNo /10;

    }
    iNo = iTemp;

    while(iNo  != 0)
    {
        iDigit = iNo % 10 ; 

        iSum = iSum + iMult(iDigit , iDigCnt);

        iNo = iNo /10;

    }
    if(iSum == iTemp)
    {
        return true;
        }

    else
    
    return false;
}
int main()
{
    int iValue =0;
    bool bRet =false;

    printf("Enter the Number :\n");
    scanf("%d",&iValue);

    bRet = Check(iValue);

    if(bRet == true)
    {
        printf("yes");
    }
    else
    {
        printf("No");
    }




    return 0;
}