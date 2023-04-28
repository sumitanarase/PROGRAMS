// write program to summation of its non factors elements

#include<stdio.h>
int SumNonFact(int iNo)
{
    int iCnt =0;
    int iSum=0;
    for(iCnt=1;iCnt<=iNo/2;iCnt++)
    {
        if(iNo % iCnt != 0)
        {
            iSum = iSum+iCnt;
            
        }
    }
}
int main()
{
    int iValue =0;
    int iRet =0;

    printf("enter the number :");
    scanf("%d",&iValue);

    iRet = SumNonFact(iValue);
    printf("%d",iRet);

    return 0;
}