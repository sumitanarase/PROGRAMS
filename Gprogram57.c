// Accept N number from user and find maximum number its for positive and negative

#include<stdio.h>
#include<stdlib.h>

int Max(int Arr[],int iLength)
{
    int iCnt =0,iMax =Arr[0];

    for(iCnt = 0;iCnt<iLength;iCnt++)
    {
        if(iMax <Arr[iCnt])  // -11 ,15 , 0  21  51
        {
            iMax = Arr[iCnt];
        }
    }
    
return iMax;
        
}
int main()
{
    int *ptr = NULL;
    int iSize = 0;
    int iCnt = 0;
    int iRet = 0;

    printf("Enter the size of array:\n");
    scanf("%d",&iSize);

    ptr =  (int *)malloc(iSize * sizeof(int));
    
    printf("Enter the elements of array :\n");
    for(iCnt =0;iCnt<iSize;iCnt++)
    {
        printf("Enter element %d :",iCnt+1);
        scanf("%d",&ptr[iCnt]);

    }
    iRet =Max(ptr ,iSize);
    printf("Maximum number is : %d",iRet);

    free(ptr);

}