//write a program to display 
// Input : 7856
// Output :
// 6
// 5
// 8
// 7
#include<stdio.h>
void DisplayDigits(int iNo)
{
    int digit =0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)  // or iNo > 0
    {
        digit = iNo % 10 ;
        printf("%d\n",digit);
        iNo = iNo / 10;  
    }
}

int main()
{
    int iValue =0;

    printf("enter the Number :");
    scanf("%d",&iValue);

    DisplayDigits(iValue);

    return 0;
}