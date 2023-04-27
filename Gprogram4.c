// Program to  Display the number which we get value from user
// and take updater for negative number
// we used for and while loop

#include<stdio.h>
void Display(int iNo)
{
    int iCnt =1;
     if(iNo <0)
     {
        iNo = -iNo;
     }
    /*for(iCnt =1;iCnt<=iNo;iCnt++)
    {
        printf("%d\n",iCnt);

    }*/
    while(iCnt <= iNo)
    {
        printf("%d\n",iCnt);
        iCnt++;
    }
}
int main()
{
    int iValue = 0;
    printf("enter the number :");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}