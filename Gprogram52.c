//Accept N numbers from user and return frequency of 11 from it.

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[],int iLength)
{
    int iCnt = 0,Fcnt =0;

    for(iCnt = 0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]==11)
        {
            Fcnt++;
        }
    }
    return Fcnt;
}
int main()
{
    int *ptr = NULL;
    int iCnt =0,iSize=0,iRet = 0;

    printf("Enter the size of array :\n");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));

    if(ptr==NULL)
    {
        printf("unable to allocate memory :");
        return -1;
    }

    printf("Enter the elements of Array :\n");
    for(iCnt =0;iCnt<iSize;iCnt++)
    {
        printf("Enter Element :");
        scanf("%d",&ptr[iCnt]);
    }
     
     iRet = Frequency(ptr,iSize);
     printf("Ferquency of 11 is :%d",iRet);

     free(ptr);

    return 0;
}