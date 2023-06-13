#include<stdio.h>
#include<stdbool.h>

bool CheckPrime(int iNo)
{
    int iCnt =0;
    int Fc=0;

    bool bFlag = true;

    for(iCnt = 2 ; iCnt<=iNo/2 ; iCnt++)
    {
        if((iNo % iCnt)==0)
        {
            bFlag = false;
            break;
        }
    }
    return bFlag;
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter the Number: ");
    scanf("%d",&iValue);

    bRet = CheckPrime(iValue);

    if(bRet == true)
    {
        printf("%d Number is prime ",iValue);
    }
    else
    {
        printf("%d Number is not prime ",iValue);
    }





    return 0;
}