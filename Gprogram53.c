//Accept N numbers from user and  accept one another number as NO,return frequency of No from it.

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[],int iLength,int iNo)
{
    int iCnt =0;
    int Fcnt =0;

    for(iCnt = 0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]==iNo)
        {
            Fcnt++;

        }
    }
    return Fcnt;
}
int main()
{
    int iSize = 0 ,iValue=0,iRet=0;
    int *ptr = NULL;
    
    printf("Enter size of Array :");
    scanf("%d",&iSize);

    printf("Enter that Number which calculate frequency :");
    scanf("%d",&iValue);

    ptr = (int *)malloc(iSize * sizeof(int));

    if(ptr == NULL)
    {
        printf("Unable to allocate the memmory..");
        return -1;
    }
    printf("Enter the elements of array:\n");

    for(int icnt =0;icnt<iSize;icnt++)
    {
        printf("Enter element %d : ",icnt+1);
        scanf("%d",&ptr[icnt]);
    }
    iRet = Frequency(ptr ,iSize ,iValue);
    printf("Frequency is :%d",iRet);

    free(ptr);


    return 0;
}