#include<stdio.h>
#include<stdlib.h>

int LastOccurence(int iLength , int Arr[],int iNo)
{
    int iCnt =0;

    for(iCnt =iLength-1; iCnt >=0 ; iCnt--)
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
    int iSize = 0  , iRet=0, iValue =0;
    int *ptr = NULL;


    printf("Enter the size of array : \n");
    scanf("%d",&iSize);

    printf("Enter the Elements of array : \n");

    ptr = (int*)malloc(sizeof(int)*iSize);

    for(int iCnt =0; iCnt< iSize ; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    printf("Enter the Number : \n");
    scanf("%d",&iValue);

    iRet = LastOccurence(iSize , ptr , iValue);

    if(iRet == -1)
    {
        printf("There is no such elements ");
    }
    else
    {
        printf("occured is : %d",iRet);
    }




    return 0;
}