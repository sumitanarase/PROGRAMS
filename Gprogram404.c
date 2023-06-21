#include<stdio.h>
#include<stdlib.h>

void Display(int iLength , int Arr[])
{
    int iCnt =0;
    int iDigit =0;
    int iDigCnt =0;

    for(iCnt = 0; iCnt<iLength ; iCnt++)
    {
         if(iDigCnt == 3)
            printf("%d\n",Arr[iCnt]);
       iDigCnt =0;
        while(Arr[iCnt] != 0)
        {
            iDigit = Arr[iCnt] % 10;

            iDigCnt++;

            Arr[iCnt] = Arr[iCnt]/10;

        }

       // printf("%d",Arr[iCnt]);
       /* if(iDigCnt == 3)
        {
            printf("%d",iCnt);
        }*/
           
        
       
             
 
    }
}
int main()
{
    int iSize =0;
    int *ptr = NULL;
    int iCnt =0;

    printf("Enter the Size of array :\n");
    scanf("%d",&iSize);

    ptr = (int*)malloc(sizeof(int)*iSize);

    printf("Enter the elements of array : \n");

    for(iCnt = 0; iCnt <iSize ; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    Display(iSize , ptr);

    free(ptr);



    return 0;
}