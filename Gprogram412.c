#include<stdio.h>
#include<stdlib.h>

int SearchFirstOccurence(int iLength , int Arr[],int iNo)
{
    int iCnt =0;


    for(iCnt=0; iCnt<iLength; iCnt++)
    {
        if(iNo == Arr[iCnt])
        {
            break;
            
        }
    }
    return iCnt;
    
}
int main()
{
    int iSize =0,iRet =0,iValue=0;
    int *ptr = NULL;

    printf("Enter the size of array : \n");
    scanf("%d",&iSize);

    ptr = (int*)malloc(sizeof(int)*iSize);

    printf("Enter the elements of array : \n");

    for(int iCnt =0; iCnt < iSize ; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    printf("Elements is : ");
    scanf("%d",&iValue);

    iRet = SearchFirstOccurence(iSize,ptr,iValue);

    if(iRet ==-1)
    {
        printf("number is not occured : \n");
    }
    else
    {
        printf("number is occured at : %d ",iRet);

    }
    free(ptr);

    return 0;
}