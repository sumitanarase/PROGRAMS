#include<stdio.h>

void DisplayB(int iNo)
{
    for(int iCnt = iNo ; iCnt>=1;iCnt--)
    {
        printf("%d\n",iCnt);
    }

}
void DisplayF(int iNo)
{
    for(int iCnt =1 ; iCnt<=iNo ;iCnt++)
    {
        printf("%d",iCnt);
    }

}
int main()
{
    int iValue =0;

    printf("Enter the number :\n");
    scanf("%d",&iValue);

    DisplayB(iValue);
    DisplayF(iValue);
}