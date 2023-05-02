// Accept N number from uer and return diffrence between frequency of even number and odd numbers 
#include<stdio.h>
#include<stdlib.h>

int CountDiffernce(int Arr[],int iLength)
{
    int iCnt =0,iEvnCnt=0,OddCnt=0,iMinus=0;

    for(iCnt = 0 ; iCnt<iLength ; iCnt++)
    {
        if((Arr[iCnt])%2==0)
        {
            iEvnCnt++;
        }
        
        if((Arr[iCnt])%2!=0)
        {
            OddCnt++;
        }
    }
    return iEvnCnt - OddCnt;
}

int main()
{
    int *ptr = NULL;
    int iCnt=0,iSize =0,iRet =0;

    printf("Enter the size of Array :");
    scanf("%d",&iSize);

    ptr =  (int *)malloc(iSize * (sizeof(int)));

    if(ptr == NULL)
    {
        printf("Unable to alloacte memory ");
        return -1;
    }
    printf("Enter the elements of Array :\n");
    for(iCnt = 0 ;iCnt<iSize;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    iRet = CountDiffernce(ptr,iSize);
    printf("Result is : %d",iRet);

    free(ptr);


    return 0;
}