#include<stdio.h>

void Display(int *ptr)
{
    int iCnt=0;

    printf("Elements are in array is :\n");

    for(iCnt = 0 ;iCnt<5;iCnt++)
    {
        printf("%d\t",*ptr);
        ptr++;
    }
}
int main()
{
    auto int Arr[5];
    register int iCnt = 0;

    printf("Enter the elements :\n");
    for(iCnt =0;iCnt<5;iCnt++)
    {
        scanf("%d",&Arr[iCnt]);
    }

    Display(Arr);

    return 0;
}