//Accept N number from user and return product of all odd elements
#include<stdio.h>
#include<stdlib.h>

int Product_Odd(int Arr[],int iLength)
{
    int iCnt=0;
    int iMult =1;

    for(iCnt =0; iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]%2 != 0)
        {
            iMult = iMult*Arr[iCnt];
        }
    }
    return iMult;
}
int main()
{
    int *ptr = NULL;
    int iSize =0,iRet=0,iCnt=0;

    printf("Enter the size of Array :\n");
    scanf("%d",&iSize);

    ptr = (int*)malloc(iSize*sizeof(int));

    if(ptr == NULL)
    {
        printf("Unable to allocate the memory,,,\n");
        return-1;
    }

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        printf("Enter the Number %d : ",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }
    iRet = Product_Odd(ptr,iSize);
    printf("product of all odd number is : %d ",iRet);

    free(ptr);

    return 0;
}