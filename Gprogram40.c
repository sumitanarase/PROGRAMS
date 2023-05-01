#include<stdio.h>

void Display(int Brr[])
{
    int iCnt = 0;
    printf("Elements are :\n");
    for(iCnt = 0; iCnt<3;iCnt++)
    {
        printf("%d\n",Brr[iCnt]);
    }
}
int main()
{
    int Arr[3];
    int iCnt = 0;

    printf("Enter the elements of array :\n");
    for( iCnt =0; iCnt<3;iCnt++)
    {
        scanf("%d",&Arr[iCnt]);

    }

    Display(Arr);

    return 0;
}