#include<stdio.h>
#include<stdlib.h>

void  Display(int Arr[] , int iLength)
{
    int iCnt =0;

    printf("is :");
    for(iCnt = 0; iCnt<iLength ; iCnt++)
    {
        if((Arr[iCnt]%5==0) &&(Arr[iCnt]%2==0))
        {
            printf("%d\t",Arr[iCnt]);
        }
    }
}
int main()
{
    int iSize = 0;
    int iCnt =0;
    int *ptr = NULL;

    printf("Enter the Size of array:\n");
    scanf("%d",&iSize);

    ptr = (int*)malloc(sizeof(int)*iSize);
    
    printf("Enter the elements of array :\n");

    for(iCnt = 0; iCnt<iSize;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    Display(ptr,iSize);

    free(ptr);




    return 0;
}