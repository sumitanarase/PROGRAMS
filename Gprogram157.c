#include<stdio.h>
#include<stdlib.h>

int O(int arr[],int iLengeth ,int iNo)
{
    int iCnt =0;

    for(iCnt =0; iCnt<iLengeth ;iCnt++)
    {
        if(arr[iCnt]==iNo)
        {
            break;
        }
    }
    return iCnt;
}
int main()
{
    int iSize =0;
    int *ptr =0;
    int iValue =0;
    int iRet =0;

    printf("ENtee the size of Array :\n");
    scanf("%d",&iSize);

    printf("Enter the element for search:\n");
    scanf("%d",&iValue);

    ptr = (int*)malloc(iSize * sizeof(int));

    for(int iCnt = 0; iCnt<iSize ;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    iRet = O(ptr,iSize,iValue);
    printf(" is %d",iRet);

    free(ptr);

    return 0;
}