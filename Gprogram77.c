#include<stdio.h>
int J(int iNo)
{
    int idig =0;
    int idigcnt=0;

    while(iNo!=0)
    {
        idig = iNo % 10 ;
        idigcnt++;
        iNo = iNo /10;
    }
    return idigcnt;
}
int main()
{
    int iValue =0;
    int iR=0;

    printf("Enter :");
    scanf("%d",&iValue);

    iR =J(iValue);
    printf(" is %d",iR);

    return 0;
}