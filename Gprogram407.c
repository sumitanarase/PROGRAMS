#include<stdlib.h>
#include<stdio.h>

int Sum(int iLength , int Arr[])
{
    int Ans =0;

    for(int icnt =0 ; icnt<iLength ; icnt++)
    {
        Ans = Ans + Arr[icnt];
    }
    return Ans ;
}

int main()
{
    int iSize =0;
    int *ptr = NULL;
    int iRet =0;

    printf("Enter the size of array :\n");
    scanf("%d",&iSize);

    ptr = (int*)malloc(sizeof(int)*iSize);

    printf("Enter the elements of array : \n");

    for(int iCnt = 0; iCnt < iSize ; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    iRet =Sum(iSize , ptr);

    printf("Sum is : %d",iRet);



    return 0;
}