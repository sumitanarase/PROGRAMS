// write a program to check if it is even or odd

#include<stdio.h>
#include<stdbool.h>
bool CheckEvenorOdd(int iNo)
{
    if(iNo % 2 ==0)
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
    bool bRet;

    printf("enter the number :");
    scanf("%d",&iValue);

    bRet =  CheckEvenorOdd(iValue);

    if(bRet == true)
    {
        printf(" %d : number is even ",iValue);

    }
    else
    {
        printf("%d : Number is odd",iValue);
     }

    return 0;

}