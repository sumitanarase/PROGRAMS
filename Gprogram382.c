#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[] , int ilength)
{
    int iCnt =0;
    printf("Elements of array are :\n");

    for(iCnt =0; iCnt<ilength ; iCnt++)
    {
        printf("%d\n",Arr[iCnt]);
    }
}
int main()
{
    int *ptr = NULL;
    int iSize =0;
    int iCnt =0;

    printf("Enter the Number of elements \n");
    scanf("%d",&iSize);

    ptr = (int*)malloc(iSize * sizeof(int));
    
    printf("Enter elements : \n");

    for(iCnt = 0; iCnt<iSize ; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    Display(ptr , iSize);

    free(ptr);
    
    return 0;
}