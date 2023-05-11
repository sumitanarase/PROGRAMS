#include<stdio.h>
#include<stdlib.h>

void SubArray(int arr[],int iLength,int sum)
{
    int CurrentSum =0;

    for(int iCnt =0;iCnt<iLength;iCnt++)
    {
          CurrentSum = arr[iCnt];

          if(CurrentSum == sum)
          {
            printf("Number is found on%d",iCnt);
            return;
          }

          else
          {

            for(int jCnt =iCnt+1;jCnt<iLength;jCnt++)
            {
                CurrentSum = CurrentSum+arr[jCnt];

                if(CurrentSum ==sum)
                {
                printf("Number found in b/w %d and %d",iCnt,jCnt);
                return;
            }
            }
          }
    }
}
int main()
{
    int iValue =0;
    int iSize =0;

    int*ptr = NULL;

    printf("Enter that number for find a sum :\n");
    scanf("%d",&iValue);

    printf("Enter the size of array :\n");
    scanf("%d",&iSize);

    ptr = (int*)malloc(iSize * sizeof(int));

    for(int iCnt =0;iCnt<iSize;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    SubArray(ptr,iSize,iValue);

    free(ptr);


    return 0;
}