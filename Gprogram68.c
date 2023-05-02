//Accept N number from uuser and return frequency of 11 from it 
#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[],int iLength)
{
    int icnt =0;
    int Fcnt =0;
    for(icnt = 0;icnt<iLength;icnt++)
    {
        if(Arr[icnt]==11)
        {
            Fcnt++;

        }
    }
    return Fcnt;
}
int main()
{
    int *ptr = NULL;
    int iCnt =0,iSize =0,iRet=0;

    printf("Enter the size of array :\n");
    scanf("%d",&iSize);

    ptr = (int*)malloc(iSize * sizeof(int));

    if(ptr == NULL)
    {
        printf("Unable to allocate the memory...\n");
        return -1;
    }
    for(iCnt =0;iCnt<iSize;iCnt++)
    {
        printf("Enter the Number %d : ",iCnt +1);
        scanf("%d",&ptr[iCnt]);
    }
    iRet = Frequency(ptr,iSize);
    printf("Frequency of 11 is : %d",iRet);

    free(ptr);
    return 0;
}