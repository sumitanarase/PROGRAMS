//Accept N number from user and return the difference between largest and smallest Number 
#include<stdio.h>
#include<stdlib.h>

int Diffbet_large_small(int Arr[],int iLength)
{
    int iCnt=0,iMin=Arr[0],iMax=Arr[0];
    for(iCnt = 0 ; iCnt<iLength;iCnt++)
    {
        if((iMax < Arr[iCnt]))
        {
           (iMax = Arr[iCnt] );
           
        }
    }

    for(iCnt = 0 ; iCnt<iLength;iCnt++)
    {
        if((iMin > Arr[iCnt]))
        {
           (iMin = Arr[iCnt] );
           
        }
    }
     
    return iMax-iMin;
}
int main()
{
    int *ptr = NULL;
    int iRet =0,iSize,iCnt =0;

    printf("Enter the size of array :");
    scanf("%d",&iSize);

    ptr = (int*)malloc(iSize * sizeof(int));
    if(ptr==NULL)
    {
        printf("Unable to allocate memory...!");
        return-1;

    }
    for(iCnt =0;iCnt<iSize;iCnt++)
    {
        printf("Enter the Number %d :",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }
    iRet = Diffbet_large_small(ptr,iSize);
    printf("Difference between small and large number : %d",iRet);

    free(ptr);

    return 0;
}
