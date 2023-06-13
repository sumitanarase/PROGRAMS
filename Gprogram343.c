#include<stdio.h>
#include<stdbool.h>

int CountFact(int iNo)
{
    int iCnt =0;
    int Fact =0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt =1 ; iCnt<=(iNo/2);iCnt++)
    {
        if((iNo % iCnt)==0)
        {
            Fact++;
        }
    }
    return Fact;
}

bool CheckPrime(int iNo)
{
    if((iNo % 2)==0)
    {
        return false;
    }
    int iRet =0;

    iRet = CountFact(iNo);

    if(iRet ==1)
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
    int iRet =0;
    int iValue= 0;

    bool bRet;

    printf("Enter the Number :\n");
    scanf("%d",&iValue);

  bRet = CheckPrime(iValue);

  if(bRet == true)
  {
    printf("Number is prime");
  }
  else
  {
    printf("Number is not prime");
  }

    return 0;
}