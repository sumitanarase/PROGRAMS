//write a program to display element in array using for loop

#include<stdio.h>

int main()
{
    auto int Arr[5];
    register int iCnt = 0;

    printf("Enter the elements :\n");

    for(iCnt =0; iCnt<5;iCnt++)
    {
        scanf("%d",&Arr[iCnt]);
    }

    printf("Elements are in array is :\n");

    for(iCnt = 0 ;iCnt<5;iCnt++)
    {
        printf("%d",Arr[iCnt]);
    }


    return 0;
}