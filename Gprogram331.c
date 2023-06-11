#include<stdio.h>
#include<stdbool.h>

int SumPerfect(int iNo)
{
    int iCnt =0;

    int iSum =0;

    for(iCnt = 1;iCnt<=(iNo/2) ; iCnt++)
    {
        if((iNo % iCnt)==0)
        {
            iSum = iSum +iCnt;
        }
    }
    return iSum;
}

bool CheckPerfect(int iNo)
{
    int iRet = 0;

    iRet = SumPerfect(iNo);
    
    if(iRet == iNo)
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
    bool bRet = true;

    printf("Enter the Number :\n");
    scanf("%d",&iValue);

    bRet = CheckPerfect(iValue);

    if (bRet == true)
    {
        printf("%d Number is Perfect : ",iValue);
    }
    else
    {
        printf("%d Number is not perfect :",iValue);
    }
    

    return 0;
}