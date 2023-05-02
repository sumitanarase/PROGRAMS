//Accept N number from user and display all such elements which are even and divisible by 5

#include<stdio.h>
#include<stdlib.h>
void Display(int Arr[],int iLength)
{
    int iCnt = 0;
    
    printf("Number is even and didvisble by 5=\n");
    for(iCnt = 0; iCnt<iLength ; iCnt++)
    {
        if(((Arr[iCnt])%2==0) &&(Arr[iCnt])%5==0)
        {
            printf("%d",Arr[iCnt]);
        }
    }
    
}
int main()
{
    int *ptr=NULL;
    int iSize =0,iCnt=0;

    printf("Enter the size of array :");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));

    if(ptr == NULL)
    {
        printf("Unable to allocate the memory :");
        return -1;
    }

    printf("Enter the elements :");
    for(iCnt = 0; iCnt<iSize;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    Display(ptr,iSize);
    free(ptr);

    return 0;
}