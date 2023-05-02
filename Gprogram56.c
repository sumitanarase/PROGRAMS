// Accept N number from user and perfrom largest number  Only for positive

#include<stdio.h>
#include<stdlib.h>

int Maximum(int Arr[],int iLength)
{
    int iCnt =0;
    int iMax=0;

    for(iCnt = 0; iCnt<iLength;iCnt++)
    {
        if(iMax < Arr[iCnt])
        {
            iMax = Arr[iCnt];
        }
    }
    return iMax;
}
int main()
{
    int *ptr = NULL;
    int iSize =0;
    int iRet = 0;

    printf("Enter the size of array :\n");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));

    if(ptr == NULL)
    {
        printf("unable to allocate the memory...\n");
        return -1;
    }
    printf("Enter the elements of array:\n");
    for(int iCnt =0; iCnt<iSize;iCnt++)
    {
        printf("Enter element %d :",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }

    iRet = Maximum(ptr,iSize);
    printf("Maximum Number is :%d",iRet);
    free(ptr);

    return 0;
}