#include<stdio.h>
#include<stdlib.h>

int Frequncy(int Arr[],int iLength)
{
    int iCnt =0;
    int FreqCnt =0;

    for(iCnt =0; iCnt<iLength ; iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            FreqCnt++;
        }
    }
    return FreqCnt;
}
int main()
{
    int iSize =0;
    int *ptr= NULL;
    int iCnt =0;
    int iret =0;

    printf("Enter the size of array :\n");
    scanf("%d",&iSize);

    ptr = (int*)malloc(iSize * sizeof(int));

    printf("enter the elements of array :\n");

    for(iCnt =0; iCnt<iSize ; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    iret = Frequncy(ptr , iSize);
    printf("Ferquncy of 11 is : %d",iret);

    free(ptr);




    return 0;
}