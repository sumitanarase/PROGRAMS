//write a program to display factors in reverse order
#include<stdio.h>

void FactRev(int iNo)
{
    int iCnt=0;

    for(iCnt=iNo;iCnt>=1;iCnt--)
    {
        if(iNo % iCnt == 0)
        {
            printf("%d ",iCnt);
        }
        
    }
}
int main()
{
    int iValue =0;

    printf("enter the number :");
    scanf("%d",&iValue);

    FactRev(iValue);

    return 0;
}