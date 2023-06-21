#include<stdio.h>
#include<stdlib.h>

int Frequnecy(int iLength , int Arr[], int iNo)
{
    int iCnt =0;
    int FreqCnt =0;

    for(iCnt =0; iCnt < iLength ; iCnt++)
    {
        if(iNo == Arr[iCnt])
        {
            FreqCnt++;

        }
    }
    return FreqCnt;
}
int main()
{
    int iSize =0 , iRet =0,iCnt =0 ,iValue=0; 
    int * ptr = NULL;

    printf("Enter the size of array : \n");
    scanf("%d",&iSize);

    ptr = (int*)malloc(sizeof(int)*iSize);

    for(iCnt =0; iCnt < iSize ; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    printf("Enter the Number to check frequency : \n");
    scanf("%d",&iValue);

    iRet = Frequnecy(iSize, ptr , iValue);

    printf("Frequnecy is : %d",iRet);


    return 0;
}