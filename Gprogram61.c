//another way to search that number with out using flag

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Search(int Arr[],int iLength,int iNo)
{
    int iCnt =0;

 for(iCnt = 0; iCnt < iLength; iCnt++)
 {
     if(Arr[iCnt] == iNo)     
            {
                break;
            }

 }
 if(iCnt == iLength)
 {
    return false;
 }
 else
 {
    return true;
 }

}
int main()
{
    int *ptr = NULL;
    int iSize = 0, iValue = 0,iCnt =0;
    bool bRet = false;

    printf("Enter that number to check Search :\n");
    scanf("%d",&iValue);

    printf("Enter the size of array:\n");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));
    if(ptr == NULL)
    {
        printf("unable to allocate to memory ...\n");
        return -1;
    }

    for(iCnt = 0 ;iCnt<iSize ;iCnt++)
    {
        printf("Enter elemen %d :",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }
    bRet = Search(ptr,iSize,iValue);
     if(bRet == true)
     {
        printf("Number is presnt in array....!\n");
     }
     else
     {
        printf("Number is not in array...!\n");

     }
    
    free(ptr);

    return 0;

}

