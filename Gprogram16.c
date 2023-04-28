//write a program to display non factors

#include<stdio.h>
void DisplayNon(int iNo)
{
    int iCnt =0;
    for(iCnt=1;iCnt<=iNo/2;iCnt++)
    {
        if(iNo % iCnt != 0)
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

    DisplayNon(iValue);

    return 0;
}