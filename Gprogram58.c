//Accept N number from user and find minimum number 

#include<stdio.h>
#include<stdlib.h>

int Minimum(int Arr[],int iLength)
{
    int iMin =Arr[0],iCnt =0;

    for(iCnt = 0; iCnt<iLength;iCnt++)
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
    int *ptr = NULL;
    int iSize,iRet,iCnt =0;

    printf("Enter the size of array :\n");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize*sizeof(int));

    if(ptr == NULL)
    {
        printf("Unable to allocate memory..\n");
        return -1;
    }

    printf("Enter the elements of array :\n");
    for(iCnt = 0; iCnt <iSize ;iCnt++)
    {
        printf("Enter the number %d :",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }
    iRet = Minimum(ptr ,iSize);
    printf("Minimum number is : %d",iRet);

    free(ptr);
}