#include<stdio.h>
#include<stdbool.h>
bool CheckDiv(int iNo)
{
    if((iNo %3== 0)&&(iNo % 5 == 0))
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

    int iValue=-0;
    bool bRet = false;

    printf("ENter the number : ");
    scanf("%d",&iValue);

    bRet = CheckDiv(iValue);

    if(bRet == true)
    {
        printf("Number is Divisible by 3 and 5");

    }
    else
    {
          printf("Number is  not  Divisible by 3 and 5");
    }

    return 0;
}