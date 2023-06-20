#include<stdio.h>
#include<stdlib.h>

int Occurence(int Arr[] , int iLength , int iNo)
{
    int iCnt =0;

    for(iCnt =iLength-1; iCnt>=0;iCnt--)
    {
        if(Arr[iCnt]==iNo)
        {
            break;
        }
    }
    return iCnt;
}
int main()
{
    int iSize =0;
    int *ptr =NULL;
    int iValue =0;
    int iret =0;
    int iCnt =0;


    printf("Enter the size of array :\n");
    scanf("%d",&iSize);

    printf("Enter the Number : \n");
    scanf("%d",&iValue);

    ptr = (int*)malloc(sizeof(int)*iSize);
    printf("Enter the Elements :\n");

    for(iCnt =0; iCnt<iSize ; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    iret = Occurence(ptr,iSize,iValue);

    printf("occured at : %d",iret);
    



    return 0;
}