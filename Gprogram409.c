#include<stdio.h>
#include<stdlib.h>

int Minimum(int Arr[] ,int iLength)
{
    int iCnt =0; 
    int iMin =Arr[0];

    for(iCnt = 0; iCnt < iLength ; iCnt++)
    {
        if(iMin > Arr[iCnt])
        {
            iMin = Arr[iCnt];
        }
    }
    return iMin;
}
int main()
{
    int iSize =0,iRet =0;

    int *ptr = NULL;

    printf("Enter the size of array :\n");
    scanf("%d",&iSize);

    ptr = (int*)malloc(sizeof(int)*iSize);

    printf("Enter the elements of array : \n");


    for(int icnt =0; icnt < iSize ; icnt++)
    {
        scanf("%d",&ptr[icnt]);
    }

    iRet = Minimum(ptr , iSize);

    printf("minimum number is : %d",iRet);

    free(ptr);


    return 0; 
}