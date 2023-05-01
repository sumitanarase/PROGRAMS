// easy way to code
#include<stdio.h>
void Display(int ptr[])
{
    int iCnt = 0;
    printf("Element are in array:\t");
    for(iCnt = 0 ;iCnt<5;iCnt++)
    {
        printf("%d",*ptr);

        ptr++;
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