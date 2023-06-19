#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[] , int iLength)
{
    int iCnt =0;

    printf("is : \n");
    for(iCnt =0; iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]%11==0)
        {
            printf("%d\n",Arr[iCnt]);
        }
    }
}
int main()
{

    int iSize =0;
    int iCnt =0;

    int * ptr = NULL;

    printf("Enter the size of array :\n");
    scanf("%d",&iSize);

    ptr = (int*)malloc(sizeof(int)*iSize);
    printf("Enter the elements of array :\n");
    
    for(iCnt =0; iCnt<iSize ; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    Display(ptr , iSize);

    free(ptr);

    return 0;
}