//Accept N from user and return largest number from that N number

#include<stdio.h>
#include<stdlib.h>

int Maximum(int Arr[],int iLength)
{
    int iCnt =0,iMax=0;

    for(iCnt =0;iCnt<iLength;iCnt++)
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
    int iSize = 0,iCnt = 0,iRet =0;

    printf("Enter the size of Array ");
    scanf("%d",&iSize);

    ptr = (int*)malloc(iSize * sizeof(int));

    if(ptr == NULL)
    {
        printf("Unable to allocate the memory :");
        return -1;
    }
    printf("Enter the elememts of Array :\n");
    for(iCnt =0;iCnt<iSize;iCnt++)
    {
        printf("Enter Element %d\n",iCnt+1);
        scanf("%d",&ptr[iCnt]);

    }
    iRet = Maximum(ptr ,iSize);
    printf("Maximum number is :%d",iRet);

    free(ptr);

    return 0;
}