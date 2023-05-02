// accept N number from user and find index of that arrays
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int firstOccurence(int Arr[],int iLength,int iNo)
{
    int iCnt =0;
    for(iCnt = 0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]==iNo)
        {
            break;
        }
    }
    if(iCnt == iLength)
    {
        return -1;
    }
    else
    {
        return iCnt;
    }
}

int main()
{
    int *ptr = NULL;
    int iSize = 0, iValue = 0,iCnt =0;
    int iRet =0;

    printf("Enter that number to check Search :\n");
    scanf("%d",&iValue);

    printf("Enter the size of array:\n");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));
    if(ptr == NULL)
    {
        printf("unable to allocate to memory ...\n");
        return -1;
    }

    for(iCnt = 0 ;iCnt<iSize ;iCnt++)
    {
        printf("Enter elemen %d :",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }
    iRet = firstOccurence(ptr,iSize,iValue);
     if(iRet == -1)
     {
        printf("There is no such element in array....!\n");
     }
     else
     {
        printf("Element first occured at :\n%d",iRet);

     }
    
    free(ptr);

    return 0;

}