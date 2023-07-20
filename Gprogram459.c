#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[],int iLength)
{

    for(int iCnt=0;iCnt<iLength;iCnt++)
    {
        printf("%d\n",Arr[iCnt]);
    }
}
int main()
{
    int isize =0;
    int *p = NULL;

    printf("Enter the size of array :");
    scanf("%d",&isize);

    p = (int*)malloc(sizeof(int));

    for(int iCnt =0 ;iCnt<isize;iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }

    Display(p,isize);
    return 0;
}