#include<stdio.h>
#include<stdbool.h>

bool CheckPerfect(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 1 ; iCnt<=(iNo/2);iCnt++)
    {
        if((iNo %iCnt)==0)
        {

            iSum = iSum + iCnt;
            
        }
       // return iSum;
    }
    if(iSum == iNo)
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
    int iValue = 0;
    bool bRet = false;
     
     printf("Enter the number\n");
     scanf("%d",&iValue);

     bRet = CheckPerfect(iValue);

     if(bRet == true)
     {
        printf("Number is Perfect\n");
     }
     else
     {
        printf("Number is not perfect\n");
     }


    return 0;
}