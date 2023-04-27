// Input : 4
// Output : 10  (1+2+3+4)

// Input : 5
// Output : 15  (1+2+3+4+5)

// Input : 7
// Output : 28  (1+2+3+4+5+6+7)

// use Upadater for negative number convert into positive

#include<stdio.h>
int Summation(int iNo)
{
    int iCnt =0;
    int iSum =0;
    if(iNo<0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt<=iNo;iCnt++)
    {
        iSum = iSum+iCnt;

    }
    return iSum;
}
int main()
{
    int iRet =0;
    int iValue = 0;
    printf("Enter the number:");
    scanf("%d",&iValue);

    iRet=Summation(iValue);
    printf("Summation is: %d",iRet);

    return 0;

}