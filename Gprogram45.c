//Accept N Numbers from  user and Display all such elements which are divisible by 5

#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[],int iLength)
{
    int iCnt = 0;

    printf("Elemntes divided by 5 :\n");

    for(iCnt = 0; iCnt < iLength ;iCnt++)
    {
        if((Arr[iCnt])%5==0)
        {
            printf("%d\t",Arr[iCnt]);
        }
    }
}
int main()
{
    int *ptr= NULL;
    int iSize =0,iRet = 0;

    printf("Enter the size of Array :");
    scanf("%d",&iSize);
    
    ptr = (int *)malloc(iSize * sizeof(int));

    printf("Enter the Elements\n");

    for(int iCnt = 0;iCnt<iSize;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    
    Display(ptr ,iSize);
    free(ptr);

    return 0;
}