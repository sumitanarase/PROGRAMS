//accept number and return sumation of digits using filter 

#include<stdio.h>
int SumDigit(int iNo)
{
    int iDigit=0;
    int iSum = 0;
    if(iNo <0)
    {
        iNo = -iNo;
    }
    while(iNo > 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;
        iNo = iNo /10;
    }
    return iSum;
}
int main()
{
    int iValue =0;
    int iRet =0;

    printf("enter the number:");
    scanf("%d",&iValue);

    iRet = SumDigit(iValue);
    printf("Summation of digits is :%d",iRet);

    return 0;
}