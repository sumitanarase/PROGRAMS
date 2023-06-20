#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int Frequency(int Arr[] , int iLength , int iNo)
{
    int iCnt =0;
    int Fcnt =0;

    for(iCnt = 0; iCnt<iLength ; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            break;
        }
    }
   if(iCnt==iLength)
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
    int iSize =0;
    int iValue =0;
    bool iRet;
    int iCnt =0;
    int *ptr = NULL;

    printf("Enter the size of array :\n");
    scanf("%d",&iSize);

    ptr = (int*)malloc(sizeof(int)*iSize);

    printf("Enter Number that you eant to check :\n");
    scanf("%d",&iValue);
    
    printf("Enter Elements of array :\n");

    for(iCnt = 0; iCnt<iSize ; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);

    }
    iRet= Frequency(ptr , iSize , iValue);

    if(iRet == true)
    {
        printf("yes");
    }
    else
    {
        printf("No");
    }
    free(ptr);






    return 0;
}