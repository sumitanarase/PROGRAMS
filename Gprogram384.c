#include<stdio.h>
#include<stdlib.h>

int CountEvent(int Arr[] , int iLenght)
{
    int iCnt =0;
    int CntEven =0;
    for(iCnt = 0 ; iCnt<iLenght;iCnt++)
    {
        if(Arr[iCnt] %2 ==0)
        {
            CntEven++;
            
        }
    }
    return CntEven;
}
int main()
{
    int iSize =0;
    int *ptr = NULL;
    int iCnt =0;
    int iRet =0;

    printf("Enter the size of array :\n");
    scanf("%d",&iSize);

    ptr = (int*)malloc(iSize * sizeof(int));

    for(iCnt = 0; iCnt<iSize ; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    iRet = CountEvent(ptr , iSize);

    printf("Even number in array : %d",iRet);

    free(ptr);





    return 0;
}