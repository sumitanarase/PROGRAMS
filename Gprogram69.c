//Accept N number from user and accept one another number as no check whether NO is present or not
#include<stdbool.h>
#include<stdio.h>
#include<stdlib.h>

bool  Check(int Arr[],int iLength,int iNo)
{
    int iCnt =0;
    for(iCnt =0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]==iNo)
        {
            break;
        }
    }
    if(iCnt ==iLength)
    {
        return false;
    }
    else
    {
        return true;
    }
}
int main()
{
    int *ptr =NULL;
    int iSize =0,iValue=0,iCnt =0;
    bool bRet =false;

    printf("Enter that number which you want check :");
    scanf("%d",&iValue);

    printf("Enter the size of array :\n");
    scanf("%d",&iSize);

    ptr = (int*)malloc(iSize*sizeof(int));
    for(iCnt =0;iCnt<iSize;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    bRet = Check(ptr,iSize,iValue);
    if(bRet == true)
    {
        printf("Number is present\n");
    }
    else
    {
        printf("Number is Not Present...\n");
    }

    free(ptr);

    return 0;
}