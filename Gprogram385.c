#include<stdio.h>
#include<stdlib.h>

int  Difference(int Arr[] , int iLength)
{
    int iCnt =0;
    int iSum =0;
    int iSum2=0;

    for(iCnt = 0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]%2==0)
        {
            iSum = iSum + Arr[iCnt];

        }
    }
     for(iCnt = 0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]%2 !=0)
        {
            iSum2 = iSum2 + Arr[iCnt];

        }
    }

    return iSum - iSum2;
}
int main()
{
    int iSize =0;
    int *ptr= NULL;
    int iCnt =0;
    int iRet =0;

    printf("Enter the size of array :\n");
    scanf("%d",&iSize);

    ptr = (int*)malloc(iSize * sizeof(int));

    printf("Enter Elements :\n");

    for(iCnt = 0; iCnt<iSize ; iCnt++)
    {
        printf("Enter the element %d : ",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }

    iRet = Difference(ptr,iSize);

    printf("Differnece is  :%d ",iRet);

    free(ptr);



    return 0;
}