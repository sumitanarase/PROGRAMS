//Accept N numbers from user and display all such elements which are multipies of 11 

#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[],int iLength)
{
    int iCnt =0 ;
     printf("Number are multiplies of 11 :");

     for(iCnt = 0 ;iCnt<iLength ;iCnt++)
     {
        if(Arr[iCnt]%11 == 0)
        {
            printf("%d\t",Arr[iCnt]);
        }
     }
}
int main()
{
    int *ptr = NULL;
    int iSize=0, iCnt = 0;
    printf("Enter the size of array ");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));

    if(ptr == NULL)
    {
        printf("unable to allocate the memory\n");
        return-1;
    }

    printf("Enter the elements:\n");
    for(iCnt = 0; iCnt<iSize ; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    Display(ptr,iSize);
    free(ptr);


    return 0;
}