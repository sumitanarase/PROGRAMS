#include<stdio.h>
#include<stdlib.h>

void DisplayEven(int Arr[] , int iLength)
{
    int iCnt =0;

    printf("Even Elements are :\n");
    for(iCnt =0; iCnt<iLength ; iCnt++)
    {
        if(Arr[iCnt]%2==0)
        {
            
            printf(" %d\n",Arr[iCnt]);
        }
      
    }
}
int main()
{
    int *ptr = NULL;
    int iSize =0;
    int iCnt =0;

    
    printf("Enter the Size of array :\n");
    scanf("%d",&iSize);

    ptr = (int*)malloc(iSize * sizeof(int));
    printf("Enter the Elements : \n");

    for(iCnt = 0; iCnt<iSize;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    DisplayEven(ptr , iSize);

    free(ptr);


    return 0;
}