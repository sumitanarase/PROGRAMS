// easy way to code start it is used for hiding * but array is internally in consider as pointer

#include<stdio.h>
void Display(int ptr[])
{
    int iCnt = 0;
    printf("Element are in array:\t");
    for(iCnt = 0 ;iCnt<5;iCnt++)
    {
        printf("%d\t",ptr[iCnt]);
    }
}
int main()
{
    auto int Arr[5];
    register int iCnt = 0;

    printf("Enter the elements in array \n");

    for(iCnt = 0; iCnt<5;iCnt++)
    {
        scanf("%d",&Arr[iCnt]);
    }
    Display(Arr);

    return 0;
}