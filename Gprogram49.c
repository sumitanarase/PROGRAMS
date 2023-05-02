//Accept N numbers from user and return frequency of even numbers

#include<stdio.h>
#include<stdlib.h>

int FrequnecyEven(int Arr[],int iLength)
{
    int iCnt = 0;
    int EvnCnt=0;

    for(iCnt = 0; iCnt<iLength ;iCnt++)
    {
        if((Arr[iCnt])%2==0)
        {
            EvnCnt++;
        }
    }
    return EvnCnt;
}
int main()
{
    int *ptr = NULL;
    int iSize=0,iCnt=0,iRet =0;

    printf("Enter the size of array :");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));

    if(ptr == NULL)
    {
        printf("Unable to allocate memory ");
        return -1;
    }
    printf("Enter the elements of Array :");

    for(iCnt = 0; iCnt<iSize ;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    iRet = FrequnecyEven(ptr ,iSize);
    printf("Frequency of Even number is :%d",iRet);
    free(ptr);
    

    return 0;
}