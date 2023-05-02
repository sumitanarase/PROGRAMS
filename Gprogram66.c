//Accept N number from user and return difference between frequency of even number and odd number

#include<stdio.h>
#include<stdlib.h>
int Difference_odd_Even(int Arr[],int iLength)
{
    int iCnt =0;
    int OCnt=0;
    int Evecnt=0;
    for(iCnt =0;iCnt<iLength;iCnt++)
    {
        if((Arr[iCnt]%2==0)||(Arr[iCnt]%2!=0))
        {
            Evecnt++ && OCnt++;
            //OCnt++;
            
        }
    }
   /* for(iCnt =0;iCnt<iLength;iCnt++)
    {
        if((Arr[iCnt]%2!=0))
        {
           OCnt++;
            
        }
    }*/
    return Evecnt- OCnt;
}
int main()
{
    int *ptr = NULL;
    int iSize =0,iRet=0,iCnt =0;

    printf("Enter the size  of array :\n");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize*sizeof(int));

    if(ptr == NULL)
    {
        printf("Unable to allocate...\n");
        return-1;
    }

    for(iCnt =0;iCnt<iSize;iCnt++)
    {
        printf("Enter Number %d :",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }

    iRet = Difference_odd_Even(ptr,iSize);
    printf("Difference of odd even is : %d",iRet);

    free(ptr);

    return 0;
}