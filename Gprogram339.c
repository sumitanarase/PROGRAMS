#include<stdio.h>
#include<stdbool.h>

bool  CheckPerfect(int iNo)
{
    int iCnt = 0;
     int iSum  = 0;

     for(iCnt = 1; (iCnt<=(iNo/2)) && ((iSum <= iNo));iCnt++)
     {
        if((iNo % iCnt)==0)
        {
            iSum = iSum + iCnt;
        }
      
     }
     if(iSum == iNo)
     {
        return  true;
     }
     else
     {
        return false;
     }
}
int main()
{
    int Value = 0;
    bool bRet = true;

    printf("Enter the number\n");
    scanf("%d",&Value);

    bRet = CheckPerfect(Value);

    if(bRet == true)
    {
        printf("Number is perfect\n");
    }
    else
    {
        printf("Number is not perfect\n");

    }

    return 0;
}