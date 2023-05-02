//accept n number from user and count  even number 

#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[],int iLength)
{
    int iCnt = 0;
    int Ecnt = 0;
     
    for(iCnt = 0; iCnt<iLength ; iCnt++)
    {
        if((Arr[iCnt] % 2)== 0)
        {
            Ecnt++;
        }
    }
    return Ecnt;
}
int main()
{
    int *ptr = NULL;
    int iSize = 0,iCnt=0,iRet =0;

    printf("Enter the size of array :\n");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));
     
     printf("ENter the element for array :\n");
     
     for(iCnt = 0; iCnt<iSize ;iCnt++)
     {
        scanf("%d",&ptr[iCnt]);
     }

     iRet = CountEven(ptr,iSize);
     printf("Result is %d",iRet);
     free(ptr);


    return 0 ;
}