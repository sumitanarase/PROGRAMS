#include<stdio.h>
#include<stdlib.h>

void DisplayEven(int Arr[],int iLength)
{
    printf("Even element of array Are :\n");

    for(int iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]%2==0)
        {
            printf("%d\t",Arr[iCnt]);
        }
    }
}
int main()
{
    int *ptr = NULL;
    int iSize =0;

    printf("Enter the size of array :");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));

    for(int iCnt = 0;iCnt < iSize;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    DisplayEven(ptr ,iSize);

    free(ptr);

    return 0;
}