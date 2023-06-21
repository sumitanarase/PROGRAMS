#include<stdio.h>
#include<stdlib.h>

int  Minimum(int iLength , int Arr[])
{
    int iCnt =0;
    int iMin = Arr[0];

    for(iCnt=0;iCnt<iLength;iCnt++)
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
    int iSize =0;
    int iRet =0;
    int *ptr =  NULL;


    printf("ENter the size of array : \n");
    scanf("%d",&iSize);


    ptr = (int*)malloc(sizeof(int)*iSize);

    for(int iCnt =0; iCnt<iSize ; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);

    }

    iRet = Minimum(iSize , ptr);

    printf("Minimum number is : %d",iRet);

    free(ptr);



    return 0;
}