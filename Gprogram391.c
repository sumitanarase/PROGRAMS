#include<stdio.h>
#include<stdlib.h>

int Difference_count(int Arr[],int iLength)
{
    int iCnt =0;
    int CountOdd=0;
    int CountEven =0;

    for(iCnt = 0; iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]%2==0)
        {
            CountEven++;
        }
    }
    for(iCnt = 0; iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]%2!=0)
        {
            CountOdd++;
        }
    }
    return CountEven-CountOdd;
}
int main()
{
    int iSize =0;
    int iCnt = 0;
    int iRet =0;

    int *ptr = NULL;

    printf("Enter the size of array :\n");
    scanf("%d",&iSize);

    ptr = (int*)malloc(sizeof(int)*iSize);

    printf("Enter Elements of array :\n");

    for(iCnt =0; iCnt<iSize ; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    iRet = Difference_count(ptr , iSize);

    printf("Difffrence of frequency is :\n %d",iRet);

    free(ptr);





    return 0;
}