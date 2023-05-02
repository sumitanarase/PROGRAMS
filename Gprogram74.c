//Accept N number from user and return largest number
#include<stdio.h>
#include<stdlib.h>

int Maximum(int Arr[],int iLength)
{
    int iCnt =0;
    int iMax=Arr[0];
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
    int iRet =0,iCnt=0,iSize =0;

    printf("Enter the size of Array :\n");
    scanf("%d",&iSize);

    ptr =(int*)malloc(iSize * sizeof(int));

    if(ptr==NULL)
    {
        printf("Unable to allocate the memory.....!");
        return-1;
    }
    for(iCnt = 0;iCnt<iSize;iCnt++)
    {
        printf("Enter the number %d :",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }
    iRet = Maximum(ptr,iSize);
    printf("Maximum Number is :%d",iRet);

    free(ptr);

    return 0;
}