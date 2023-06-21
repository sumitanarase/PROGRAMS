#include<stdio.h>
#include<stdlib.h>

void Display(int iLength , int Arr[])
{
    int iCnt =0;
    int iMax =0;

    for(iCnt = 0; iCnt < iLength ; iCnt++)
    {
        if(iMax < Arr[iCnt] )
        {
            iMax = Arr[iCnt];

        }
        
    }
    printf("%d\n",iMax);
}

int main()
{
    int iSize =0;
    int *ptr = NULL;


    printf("Enter the Number : ");
    scanf("%d",&iSize);

    ptr = (int*)malloc(sizeof(int)*iSize);

    printf("Enter the elements of array : \n");

    for(int iCnt =0; iCnt<iSize ; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    Display(iSize , ptr);


    return 0;
}