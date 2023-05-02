//Accept N number from user and accept range ,Displya all elements from that range

#include<stdio.h>
#include<stdlib.h>

void Range(int Arr[],int iLength,int iNo1,int iNo2)
{
    int iCnt =0;
    for(iCnt =0;iCnt<iLength;iCnt++)
    {
        if((Arr[iCnt] >=iNo1 ) && (Arr[iCnt] <=iNo2 ) )
        printf("Result is : %d\n",Arr[iCnt]);
        
    }
    
}
int main()
{
    int *ptr = NULL;
    int iValue1=0,iValue2=0,iCnt=0,iSize=0,iRet =0;

    printf("Enter the size of array :\n");
    scanf("%d",&iSize);

    printf("Enter the 1st element :\n");
    scanf("%d",&iValue1);
    
    printf("Enter the 2nd element :\n");
    scanf("%d",&iValue2);


    ptr=(int*)malloc(iSize*sizeof(int));

    if(ptr == NULL)
    {
        printf("Unable to allocate the memory....!");
        return -1;
    }

    for(iCnt =0;iCnt<iSize;iCnt++)
    {
        printf("Enter the Number %d :",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }

    Range(ptr,iSize,iValue1,iValue2);

    free(ptr);

    return 0;
}