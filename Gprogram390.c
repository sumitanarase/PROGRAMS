#include<stdio.h>
#include<stdlib.h>

int FreqEven(int Arr[] , int iLength)
{
    int iCnt =0;
    int CntEvn =0;

    for(iCnt =0; iCnt<iLength ; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            CntEvn++;
        }
    }
    return CntEvn;
}
int main()
{
    int iSize =0;
    int iCnt =0;
    int *ptr = NULL;
    int iRet =0;

    printf("Enter the size of array :\n");
    scanf("%d",&iSize);

    ptr = (int*)malloc(sizeof(int)*iSize);

    printf("Enter elements of array :\n");

    for(iCnt =0; iCnt<iSize ; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    iRet = FreqEven(ptr , iSize);
    printf("Frequency of even elements are : \n %d",iRet);

    


    return 0;
}