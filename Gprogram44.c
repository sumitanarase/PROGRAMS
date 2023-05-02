//accept N numbers from users and return differnce between summation of even elements and summation of odd elements

#include<stdio.h>
#include<stdlib.h>
int Differnce(int Arr[],int iLength)
{
    int iSum = 0;
    int iMinus =0;
    int i = 0;
    for(int iCnt = 0; iCnt <iLength;iCnt++)
    {
         if((Arr[iCnt])%2 == 0)
        {
            iMinus =iMinus + Arr[iCnt];
        }
        if((Arr[iCnt])%2 !=0)
        {
            iSum = iSum + Arr[iCnt];
        }
       
       
    }
     return iMinus - iSum;
    
    
    
}
int main()
{
    int *ptr = NULL;
    int iSize = 0,iCnt=0,iRet = 0;

    printf("Enter the size of Array :");
    scanf("%d",&iSize);
    ptr = (int *)malloc(iSize * (sizeof(int)));

    printf("Enter the elements of array:\n");
    for(iCnt = 0; iCnt<iSize;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    iRet = Differnce(ptr,iSize);
    printf("Result is %d",iRet);
    free(ptr);

    return 0 ;
}