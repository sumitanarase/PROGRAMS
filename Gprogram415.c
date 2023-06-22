#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[] , int iLength)
{
    int iMax =Arr[0]; 
    int iMin =Arr[0];

    for(int iCnt =0; iCnt < iLength ; iCnt++)
    {
        if(iMin > Arr[iCnt])
        {
            iMin = Arr[iCnt];
        }
    }

        for(int iCnt1 =0; iCnt1 < iLength ; iCnt1++)
    {
        if(iMax < Arr[iCnt1])
        {
            iMax = Arr[iCnt1];
        }
    }

    return  iMax -iMin;

}
int main()
{
    int iSize=0 ,iret =0;
    int *ptr =NULL;

    printf("Enter the size of array : \n");
    scanf("%d",&iSize);

    ptr = (int*)malloc(sizeof(int)*iSize);

    for(int iCnt =0; iCnt < iSize ; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    iret = Difference(ptr , iSize);
    printf("Difference is : %d",iret);

    free(ptr);

    return 0;
}