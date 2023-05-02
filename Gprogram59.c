//Accept N number from user and one another number and find that number frequency
#include<stdio.h>
#include<stdlib.h>

int Occurence(int Arr[],int iLength ,int iNo)
{
    int iCnt =0;
    int OCnt =0;
    for(iCnt = 0; iCnt <iLength ;iCnt++)
    {
        if(Arr[iCnt]==iNo)
        {
            OCnt++;
        }

    }
    return OCnt;
}
int main()
{
    int *ptr = NULL;
    int iSize = 0, iValue = 0,iCnt =0;
    int iRet =0;

    printf("Enter that number to check occurence :\n");
    scanf("%d",&iValue);

    printf("Enter the size of array:\n");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));

    for(iCnt = 0 ;iCnt<iSize ;iCnt++)
    {
        printf("Enter elemen %d :",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }
    iRet = Occurence(ptr,iSize,iValue);
    printf("occurence of that number is %d",iRet);
    
    free(ptr);

}