//Accept N number from user and accept one another number as no return frequency of No from it 
#include<stdio.h>   
#include<stdlib.h>

int Frequency(int Arr[],int iLength,int iNo)
{
    int iCnt =0;
    int fcnt =0;

    for(iCnt =0; iCnt<iLength ;iCnt++)
    {
        if(Arr[iCnt]==iNo)
        {
            fcnt++;
        }
    }
    return fcnt;
}
int main()
{
    int *ptr = NULL;
    int iSize=0,iRet=0,iValue =0;

    printf("Enter the number that you want to search..\n");
    scanf("%d",&iValue);

    printf("Enter the size of array :\n");
    scanf("%d",&iSize);

    ptr = (int*)malloc(iSize * sizeof(int));

    if(ptr == NULL)
    {
        printf("Unable to allocate the memory...\n");
        return -1;
    }
    for(int iCnt =0;iCnt<iSize;iCnt++)
    {
        printf("Enter number %d :",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }
    iRet = Frequency(ptr,iSize ,iValue);

    printf("Frequency of No is : %d",iRet);

    free(ptr);
     
    return 0;
}