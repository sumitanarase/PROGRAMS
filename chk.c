#include<stdio.h>
#include<stdbool.h>

bool Check(int iNo)
{
    int iCnt=0;
    for(iCnt=2;iCnt<iNo/2;iCnt++)
    {
        if(iNo % iCnt ==0)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
}
int main()
{
    int iValue1 =0;
    bool bRet =false;

    printf("enter the number :");
    scanf("%d",&iValue1);

    bRet = Check(iValue1);

    if(bRet == true)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    
    return 0;
}