#include<stdio.h>
#include<stdlib.h>

int Count(int iLength , int Arr[])
{
    int iCnt =0;
    int dig=0;

    for(iCnt = 0;iCnt<iLength ; iCnt++)
    {
        if(Arr[iCnt] % 2 ==0)
        {
            dig++;

        }

    }
    return dig;
}
int main()
{
    int iSize =0;
    int *ptr =NULL;
    int iRet =0;

    printf("Enter the size of array :\n");
    scanf("%d",&iSize);

    ptr = (int*)malloc(sizeof(int)*iSize);

    for(int iCnt =0; iCnt<iSize ; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    iRet=Count(iSize , ptr);

    printf("Count is : %d",iRet);

    free(ptr);








    return 0;
}