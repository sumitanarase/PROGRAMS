#include<stdio.h>
#include<stdlib.h>


void Display(int iLength , int Arr[])
{
    int  iCnt =0;

    for(iCnt =0; iCnt<iLength ; iCnt++)
    {
        printf("%d\n",Arr[iCnt]);
    }
}
int main()
{
    int iSize =0;

    int *p = NULL;

    printf("Enter the size of array : \n");
    scanf("%d",&iSize);

    p = (int*)malloc(sizeof(int)*iSize);


    printf("Enter the elements of Array : \n");

    for(int iCnt =0; iCnt<iSize ; iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }

    Display(iSize , p);

    free(p);




    return 0;

}