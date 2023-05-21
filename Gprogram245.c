#include<stdio.h>
#include<stdbool.h>

int CountFactor(int iNo)
{
    int iCnt =0;
    int Factcount =0;

    for(iCnt = 2 ;iCnt<=(iNo /2);iCnt++)
    {
        if((iNo % iCnt)==0)
        {
            Factcount++;

        }
      
    }
      return Factcount;
}

bool CheckPrime(int iNo)
{
    int iRet = 0;
    iRet = CountFactor(iNo);

    if(iRet == 0)
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

    printf("Enter the Number\n");
    scanf("%d",&iValue);

    bRet= CheckPrime(iValue);

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