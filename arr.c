#include<stdio.h>
void D(int iNo)
{
    int iCnt =0;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("%d",iCnt);
    }
}
int main()
{
    int iValue =0;

    printf("enter the Nuber :\n");
    scanf("%d",&iValue);

    D(iValue);
    
    return 0;
}