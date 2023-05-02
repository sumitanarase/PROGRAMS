//Accept N number from user check whether that number contain 11 in it or not

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool  Check(int Arr[],int iLength)
{
    int iCnt= 0;

    for(iCnt = 0; iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]==11)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}
int main()
{
    int *ptr = NULL;
    int iSize=0,iCnt=0;
    bool  bRet = false;

    printf("Enter the size of array :");
    scanf("%d",&iSize);

    ptr = (int*)malloc(iSize * sizeof(int));

    if(ptr == NULL)
    {
        printf("Unable to allocate the memory...\n");
        return -1;
    }
    printf("Enter the elements of array \n");
    for(iCnt = 0; iCnt<iSize ; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    bRet =  Check(ptr,iSize);
    if(bRet == true)
    {
        printf("Array contain 11");
    }
    else
    {
        printf("Array contain not 11");
    }
    free(ptr);

    return 0;
}