#include<stdio.h>

int Count(int iNo)
{
    int iCnt = 0;
    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit =  iNo % 10;
        iCnt++;
        iNo = iNo / 10;

    }
    return iCnt;
}
int main()
{
    int iValue =0;
    int iRet = 0;

    printf("Enter the Number :");
    scanf("%d",&iValue);

    iRet = Count(iValue);
    printf("result is :%d",iRet);

    return 0;
}