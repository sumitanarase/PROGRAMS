//input : 4
// output : 4   3   2   1   1   2   3   4

#include<stdio.h>

void Display(int iNo)
{
    int icnt =0;

    for(icnt = iNo ;icnt>=1;icnt--)
    {
        printf("%d\t",icnt);
    }
    for(icnt =1;icnt<=iNo;icnt++)
    {
        printf("%d\t",icnt);
    }
}
int main()
{
    int iValue =0;

    printf("Enter the Number :");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}