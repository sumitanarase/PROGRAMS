#include<stdio.h>
#include<stdbool.h>

bool CheckPrime(int iNo)
{
    int iCnt = 0;

    for(iCnt = 2 ; iCnt<=(iNo/2);iCnt++)
    {
        if((iNo % iCnt)==0)
        {
            break;
        }
    }
    if(iCnt = (iNo/2)+1)      // jar icnt numer /2 motha asl tr prime
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