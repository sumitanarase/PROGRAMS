// diplay array elements using dynamic memory allocation

#include<stdio.h>
#include<stdlib.h>

void Diplay(int Arr[],int iLength)
{
    printf("Elements in array are :\n");
    for(int iCnt = 0; iCnt<iLength;iCnt++)
    {
        printf("%d\t",Arr[iCnt]);
    }
}

int main()
{
    int *ptr = NULL;
    int iSize = 0;

    printf("Enter thhe Number of elements :\n");
    scanf("%d",&iSize);

     ptr = (int *)malloc(iSize * sizeof(int));

     printf("Enter the elements :\n");

     for(int iCnt = 0; iCnt<iSize;iCnt++)
     {
        scanf("%d",&ptr[iCnt]);
     }

     Diplay(ptr,iSize);
     free(ptr);
    return 0;
}

// alloacte the memory 
//use the memory 
// deallocate the memory
