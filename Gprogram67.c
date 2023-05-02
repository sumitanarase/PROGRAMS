//Accept N number from user  check whether that numbers contain 11 in it or not
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Search(int Arr[],int iLength)
{
    int iCnt =0;

    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]==11)
        {
           break;
        }
    }
    if(iCnt == iLength)
    {
    return false;
    }
    else

    return true;
   
    
}
int main()
{
    int *ptr =NULL;
    int iCnt =0,iSize =0;
    bool bRet = false;
    
    printf("Enter the size of array :\n");
    scanf("%d",&iSize);

    ptr =(int*)malloc(iSize * sizeof(int));

    for(iCnt = 0; iCnt<iSize;iCnt++)
    {
        printf("Enter the Number %d :",iCnt+1);
        scanf("%d",&ptr[iCnt]);

    }
    bRet= Search(ptr,iSize);

    if(bRet == true)
    {
        printf("Array contain 11...\n");
    }
    else
    {
        printf("Array not contain 11 ...\n");
    }

        free(ptr);

    return 0;
}