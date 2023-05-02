// Accept N number from user and return frequency of even numbers 

#include<stdio.h>
#include<stdlib.h>

int FreqEven(int Arr[],int iLength)
{
    int iCnt=0;
    int EveCnt =0;

    for(iCnt = 0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]%2==0)
        EveCnt++;
    }
    return EveCnt;
}
int main()
{
    int *ptr = NULL;
    int iSize =0,iCnt =0,iRet=0;

    printf("Enter the size of array :\n");
    scanf("%d",&iSize);

    ptr = (int*)malloc(iSize * sizeof(int));

    if(ptr == NULL)
    {
        printf("Unable to allocate memory...\n");
        return -1;
    }

    for(iCnt =0;iCnt<iSize;iCnt++)
    {
        printf("Enter Number %d :  ",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }
    
    iRet = FreqEven(ptr,iSize);

    printf("Frequnecy of even number is : %d",iRet);

    free(ptr);


    return  0;
}