#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Search(int iLength , int Arr[],int iNo)
{
    int iCnt =0;
    bool bflag = false;

    for(iCnt = 0 ; iCnt < iLength ; iCnt++)
    {
        if(iNo == Arr[iCnt])
        {
            bflag = true;
            break;
            
        }
    }
    return bflag;
}
int main()
{
    int iSize =0 ,iCnt =0 ,iValue =0;
    int *ptr = NULL;
    bool bRet = false;

    printf("Enter the size of array :\n");
    scanf("%d",&iSize);

    ptr = (int*)malloc(sizeof(int)*iSize);

    printf("Enter the elements of array : \n");

    for(iCnt =0; iCnt <iSize ; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    printf("Enter Number for Check: ");
    scanf("%d",&iValue);

    bRet  = Search(iSize , ptr,iValue);

    if(bRet == true)
    {
        printf("Number is Present : \n");
    }
    else
    {
        printf("Number is not Presnt : \n");
    }



    


    return 0;
}