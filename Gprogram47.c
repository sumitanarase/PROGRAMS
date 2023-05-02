//Accept N number from user and display all such elements divisible by 3 and 5

#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[],int iLength)
{
    int iCnt = 0;
    printf("elements are divisible by 3 and 5 =");
    
    for(iCnt = 0; iCnt <iLength ;iCnt++)
    {
        if(((Arr[iCnt])%3==0)&&((Arr[iCnt])%5==0))
        {
            printf("%d\t",Arr[iCnt]);
        }
    }
}
int main()
{
    int *ptr = NULL;
    int iCnt=0,iSize =0;

    printf("Enter the size of array:");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));

    if(ptr == NULL)
    {
        printf("Unable to allocate the memory :");
        return -1;
    }
    printf("Enter the elements of array :\n");
    for(iCnt = 0; iCnt<iSize ; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    Display(ptr ,iSize);
    free(ptr);

    return 0;
}