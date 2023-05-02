//Accept N number from user and accept one another number as No return index of first occurence of that No

#include<stdio.h>
#include<stdlib.h>

int CheckIndex(int Arr[],int iLength,int iNo)
{
    int iCnt =0;
    for(iCnt =0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]==iNo)
        {
            break;
        }
    }
    if(iLength == iCnt)
    {
        return -1;
    }
    else
    {
    return iCnt;
    }
    //we can also write return icnt

}
int main()
{
    int *ptr = NULL;
    int iCnt =0,iSize,iRet=0,iValue;

    printf("Enter the size of array:\n");
    scanf("%d",&iSize);

    printf("Enter Number for check index :\n");
    scanf("%d",&iValue);

    ptr = (int *)malloc(iSize * sizeof(int));

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        printf("Enter Number %d :",iCnt+1);
        scanf("%d",&ptr[iCnt]);

    }
    iRet=CheckIndex(ptr,iSize,iValue);
    
    if(iRet == -1)
    {
        printf("There is no such Number :");
    }
    else
    {
        printf("There is number at position : %d",iRet);
    }

    free(ptr);

    return 0;
}