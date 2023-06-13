#include<stdio.h>

int CountDigit(int iNo)
{

    int iDigit=0;
    int iDigitCnt =0;

    while(iNo != 0)
    {
        iDigit = iNo %10;

        iDigitCnt++;

        iNo = iNo /10;
    }
    return iDigitCnt;

    /*for(int iCnt = 0;(iNo!=0);)
    {
        iDigit = iNo %10;

        iDigitCnt++;

        iNo = iNo /10;

    }

    return iDigitCnt;*/


}
int main()
{
    int iValue =0;
    int iRet =0;

    printf("Enter the Number \n");
    scanf("%d",&iValue);

    iRet= CountDigit(iValue);

    printf("Digits are : %d",iRet);



    return 0;
}