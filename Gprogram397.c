#include<stdio.h>
#include<stdlib.h>

int firstOcc(int Arr[] , int iLength , int i)
{
    int iCnt =0;

    for(iCnt = 0; iCnt<iLength ;iCnt++)
    {
        if(Arr[iCnt]==i)
        {
            break;
        }
    }
    if(iCnt == iLength)
    {
        return -1;
    }
    else
    {
        return 1;
    }
}
int main()
{
    int iSize =0;
    int iCnt =0;
     int iNo =0;
     int iRet =0;
    int *ptr =NULL;

    printf("Enter the size of array :\n");
    scanf("%d",&iSize);

    ptr = (int*)malloc(sizeof(int)*iSize);

    printf("Enter Number :\n");
    scanf("%d",&iNo);

    printf("Enter Elements of Array :\n");
    
    for(iCnt = 0 ; iCnt<iSize ; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    iRet = firstOcc(ptr , iSize ,iNo);

    if(iRet == -1)
    {
        printf("No");
    }
    else
    {
        printf("Yes");
    }


    return 0;
}