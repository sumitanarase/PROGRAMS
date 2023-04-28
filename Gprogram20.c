// write a code to count the digits present in number using the updater

#include<stdio.h>
int Count(int iNo)
{
    int iCnt =0;
    int iDigit =0;
    if(iNo <0)
    {
        iNo = - iNo;
    }
    while(iNo >0)
    {
        iDigit = iNo % 10; // we can remove this line
        iCnt++;
        iNo = iNo /10;

    }
    return iCnt;
}
int main()
{
    int iValue =0;
    int iRet =0;

    printf("enter the number :");
    scanf("%d",&iValue);
     
     iRet = Count(iValue);
     printf("digits are in number: %d",iRet);

    return 0;
}