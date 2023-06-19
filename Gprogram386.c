#include<stdio.h>
#include<stdlib.h>

void  Divisible(int Arr[],int iLength)
{
    int iCnt =0;

    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt] % 5 ==0)
        {
            printf("%d\t",Arr[iCnt]);
        }
    }
}
int main()
{
    int iSize =0;
    int *ptr= NULL;
    int iCnt =0;

    printf("Enter the size of array : \n");
    scanf("%d",&iSize);

    ptr = (int*)malloc(iSize *sizeof(int));

    for(iCnt = 0; iCnt<iSize;iCnt++)
    {
        printf("Element %d :",iCnt+1);

        scanf("%d",&ptr[iCnt]);
    }

    Divisible(ptr , iSize);

    free(ptr);



    return 0;
}