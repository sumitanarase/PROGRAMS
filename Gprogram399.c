#include<stdio.h>
#include<stdlib.h>

void  Display(int Arr[],int iLength , int iStart , int iEnd)
{

    int iCnt =0;

    for(iCnt = 0; iCnt<iLength;iCnt++)
    {
        if((Arr[iCnt] > iStart) ||(Arr[iCnt]<iEnd))
        {
            printf("%d",Arr[iCnt]);
        }
    }
}
int main()
{
    int iSize =0;
    int *ptr = NULL;
    int iCnt =0;
    int iStart =0;
    int iEnd = 0;

    printf("Enter the size of array :\n");
    scanf("%d",&iSize);

    printf("Enter starting point :\n");
    scanf("%d",&iStart);

    printf("Enter Ending point : \n");
    scanf("%d",&iEnd);

    ptr = (int*)malloc(sizeof(int)*iSize);

    printf("ENter the elements :\n");

    for(iCnt = 0; iCnt<iSize ; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);

    }

    Display(ptr,iSize,iStart,iEnd);

    free(ptr);







    return 0;
}