//Accept N number from user and display all such number which contain 3 digits
#include<stdio.h>
#include<stdlib.h>

int Display(int Arr[],int iLength)
{
    int iDigit =0;
    int iCnt =0;
    int iDigCnt=0;

    /* for(iCnt = 1; Arr[iCnt] != 0;iCnt++)
     {
         iDigit = Arr[iCnt] %10;
       iDigCnt++;
       Arr[iCnt] = Arr[iCnt] /10;
     }*/

      
     while((Arr[1] != 0))//||(Arr[1] != 0) && (Arr[2] != 0) && (Arr[3] != 0))
     {
        iDigit = Arr[iCnt] %10;
       
       iDigCnt++;
       
       Arr[iCnt] = Arr[iCnt] /10;
       //Arr[iCnt];
      // printf(" %d",Arr[iCnt]);
         
      
     }
    return iDigCnt;
     
    
     
}
int main()
{
    int *ptr = NULL;
    int iSize =0,iCnt =0,i=0;

    printf("Enter the size of array:\n");
    scanf("%d",&iSize);

    ptr = (int*)malloc(iSize * sizeof(int));
    if(ptr==NULL)
    {
        printf("unable to allocate memmory....\n");
        return -1;

    }
    for(iCnt =0;iCnt<iSize;iCnt++)
    {
        printf("Enter the Number %d :",iCnt+1);
        scanf("%d",&ptr[iCnt]);

    }
   i = Display(ptr,iSize);
    printf("%d",i);

    free(ptr);

    return 0;
}