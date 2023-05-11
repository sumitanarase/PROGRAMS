#include<stdio.h>
#include<stdlib.h>

int Sum(int arr[],int iLength)
{
    int iSum =0;

    for(int iCnt =0;iCnt<iLength;iCnt++)
    {
        iSum = iSum+arr[iCnt];
    }
    return iSum;
}
int main()
{
    int iSize =0;
    int iRet =0;
    int *p = NULL;

    printf("Enter the size of Array :\n");
    scanf("%d",&iSize);

    p = (int*)malloc(iSize * sizeof(int));

    for(int iCnt =0; iCnt<iSize;iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }

    iRet=Sum(p,iSize);
    printf("Sum is %d",iRet);

    free(p);

    return 0;
}