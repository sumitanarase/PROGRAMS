//Accpet N number and perfrom addition of that Number 

#include<stdio.h>
#include<stdlib.h>
int Addition(int Arr[],int iLength)
{
    int iCnt = 0,iSum =0;

    for(iCnt = 0;iCnt<iLength;iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }
    return iSum;
}
int main()
{
    int iCnt=0,iSize = 0,iRet=0;
    int *ptr = NULL;

    printf("Enter the size of Array :");
    scanf("%d",&iSize);

    ptr=(int*)malloc(iSize * sizeof(int));

    if(ptr == NULL)
    {
        printf("Unable to allocate the memory...");
        return -1;
    }
    printf("Enter the elements :\n");

    for(iCnt = 0 ;iCnt<iSize;iCnt++)
    {
        printf("Enter element %d :",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }
    iRet = Addition(ptr ,iSize);
    printf("Addition is %d",iRet);

    free(ptr);


    return 0;
}