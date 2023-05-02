//Accept N number from uuser and accept one another number as No,return index of last occurence of that Number

#include<stdio.h>
#include<stdlib.h>

int LastOccurence(int Arr[],int iLength,int iNo)
{
    int iCnt=0;
    for(iCnt =iLength;iCnt>=0;iCnt--)
    {
        if(Arr[iCnt]==iNo)
        {
            break;
        }
    }
    if(iLength==iCnt)
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
    int iSize=0,iCnt=0,iValue=0,iRet=0;

    printf("Enter the size of array :");
    scanf("%d",&iSize);

    printf("Enter to check occurence : ");
    scanf("%d",&iValue);

    ptr=(int*)malloc(iSize*sizeof(int));

    if(ptr == NULL)
    {
        printf("unable to allocate memory...\n");
        return-1;
    }

    for(iCnt =0;iCnt<iSize;iCnt++)
    {
        printf("Enter the Number %d : ",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }

    iRet=LastOccurence(ptr,iSize,iValue);

    if(iRet == -1)
    {
        printf("Number is not present \n");
    }
    else
    {
        printf("Number is occured from last at position : %d",iRet);
    }


    return 0;
}