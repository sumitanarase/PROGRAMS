#include<stdio.h>
#include<stdlib.h>
int AD(int Arr[],int iNo)
{
    int iSum=0;

    for(int iCnt=0;iCnt<iNo;iCnt++)
    {
        iSum = iSum+Arr[iCnt];

    }
    return iSum;
}
int main()
{
    int *ptr =NULL;
    int iSize =0;
    int iRet=0;

    printf("Enter the size of array:");
    scanf("%d",&iSize);

    ptr = (int*)malloc(iSize*sizeof(int));

    for(int iCnt =0;iCnt<iSize;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    
    iRet = AD(ptr,iSize);
    printf("Result is :%d",iRet);

    free(ptr);

    return 0;
}