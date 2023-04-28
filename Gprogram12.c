// write program to display number forward and backward
#include<stdio.h>

void DisplayF(int iNo1)
{
    for(int iCnt =1; iCnt<=iNo1;iCnt++)
    {
        printf("%d\n",iCnt);
    }

}
void DisplayB(int iNo2)
{
    for(int iCnt = iNo2 ;iCnt>=1;iCnt--)
    {
        printf("%d\n",iCnt);
    }
}
int main()
{
    int iValue1 = 0;
    int iValue2 = 0 ;

    printf("Enter the number for print forward:");
    scanf("%d",&iValue1);

    DisplayF(iValue1);

    printf("enter the number for print backward :");
    scanf("%d",&iValue2);

    DisplayB(iValue2);

    return 0;
}