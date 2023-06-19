#include<stdio.h>

void Display(int Brr[])
{
    printf("Elements of array are:\n");

    for(int iCnt =0;iCnt< 5;iCnt++)
    {
    printf("%d\n",Brr[iCnt]);
    }
}
int main()
{
    auto int Arr[5];

    printf("Enter the Number :\n");

    for(int iCnt = 0 ; iCnt<5; iCnt++)
    {
        scanf("%d",&Arr[iCnt]);
    }

    
    Display(Arr);
    

    return 0;


}