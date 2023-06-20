#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

void Check(int Arr[] , int iLength)
{
    int iCnt =0;

    for(iCnt =0; iCnt<iLength ; iCnt++)
    {
        if(Arr[iCnt]  == 11)
        {
          printf("11 is present \n");
        }
       
    }
    if(Arr[iCnt]==iLength)
    {
        printf("11 is not present");
    }
  
    
      

}
int main()
{
    int iSize =0;
    int *ptr =NULL;
    int iCnt =0;
    bool bRet =0;

    printf("Enter the size of array :\n");
    scanf("%d",&iSize);

    ptr = (int*)malloc(iSize * sizeof(int));

    printf("Enter the elements :\n");

    for(iCnt =0 ;iCnt<iSize;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    Check(ptr , iSize);
    free(ptr);
    
       return 0;
}