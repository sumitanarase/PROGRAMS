#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Check(int Arr[] ,int iLength)
{
    int iCnt =0;

    for(iCnt =0; iCnt <iLength ; iCnt++)
    {
        if(Arr[iCnt] %2 ==0)
        {
            return true;
        }
    }

}
int main()
{
    int iCnt =0; 
    int iSize =0;
    bool bRet = false;
    int iNo =11;

    int *ptr= NULL;


    printf("Enter the size of array :\n");
    scanf("%d",&iSize);

    ptr = (int*)malloc(iSize * sizeof(int));

    printf("Enter Elements of array :\n");

    for(iCnt =0; iCnt<iSize ; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    
    bRet = Check(ptr , iSize );

    if(bRet == true)
    {
        printf("11 is Present ");
    }
    else
    {
        printf("11 is not Present ");
    }








    return 0;
}