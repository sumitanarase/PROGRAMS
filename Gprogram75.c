//Accept N  numbers from user and return the smallest number 
#include<stdio.h>
#include<stdlib.h>

int Minimum(int Arr[],int iLength)
{
    int iCnt =0,iMin=Arr[0];

    for(iCnt =0;iCnt<iLength;iCnt++)
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
    int *ptr =NULL;
    int iRet =0,iCnt=0,iSize=0;

    printf("Enter the size of array :\n");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));

    if(ptr == NULL)
    {
        printf("Unable to allocate the memory...!");
        return-1;
    }
    for(iCnt = 0 ;iCnt<iSize;iCnt++)
    {
        printf("Enter the number %d :\n",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }
    iRet = Minimum(ptr ,iSize);
    printf("Minimum number is : %d ",iRet);

    free(ptr);

    return 0;
}