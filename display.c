#include<stdio.h>
void Display(int iNo)
{
    for(int iCnt=1;iCnt<=iNo/2;iCnt++)
    {
        if(iNo % iCnt != 0)
        {
            printf("%d",iCnt);
        }
    }
}
int main()
{
    int iValue =0;

    printf("ENter the number :\n");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;
}