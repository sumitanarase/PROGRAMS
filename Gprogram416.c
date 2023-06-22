#include<stdio.h>

void Display(int iRow , int iCol)
{
    
    for(int iCnt =0 ; iCnt < iRow ; iCnt++)
    {
        for(int iCnt1 =0 ; iCnt1 <iCol ; iCnt1++)
        {
            printf("*\t");
        }
        printf("\n");
    }
}
int main()
{
    int iValue =0;
    int iValue1 =0;

    printf("Enter the number of rows\n");
    scanf("%d",&iValue);

    printf("Enter the number of columns \n");
    scanf("%d",&iValue1);

    Display(iValue ,iValue1);




    return 0;

}