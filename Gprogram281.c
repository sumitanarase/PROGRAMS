#include<stdio.h>
#include<stdbool.h>

bool Check(int iNo)
{
    if(iNo / 5)
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
    bool bRet = 0;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    bRet = Check(iValue);

    if(bRet == true)
    {
        printf("Number is didvisble by 5\n");
    }
    else
    {
        printf("No\n");
    }

    return 0;
}