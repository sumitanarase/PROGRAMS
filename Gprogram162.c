#include<stdio.h>
#include<stdlib.h>

void FindSum(int Arr[],int iLength,int Sum)
{
    int iCnt =0;
    int CuurentSum =0;

    for(iCnt =0;iCnt<iLength;iCnt++)
    {
        CuurentSum = Arr[iCnt];
    if(CuurentSum == Sum)
    {
        printf("index is b/w %d",iCnt);
        return;
    }
     else
    {
        for(int iCnt2 =iCnt+1;iCnt2<iLength;iCnt2++)
        {
            CuurentSum = CuurentSum + Arr[iCnt2];

        if(CuurentSum ==Sum)
        {
            printf("Sum is b/w %d  and %d",iCnt+1,iCnt2+1);
            
        }
        }

    }
    }
   
   
}
int main()
{
    int iSize =0;
    int iValue =0;
    int *ptr = NULL;
     printf("ENter the size for Summation :\n");
    scanf("%d",&iValue);
    printf("Enter the size of array :\n");
    scanf("%d",&iSize);

   

    ptr = (int *)malloc(iSize * sizeof(int));

    for(int iCnt = 0; iCnt<iSize;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    FindSum(ptr,iSize,iValue);

    free(ptr);

    return 0;
}