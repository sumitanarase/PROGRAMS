// Input :  Row 4   Columns    4

/*

*   *   *   *
*   *   *
*   *
*

*/
#include<stdio.h>

void Display(int iRow,int iCol)
{
    int i =0,j=0;
    
    for(i=iRow;i>=1;i--)
    //  1=4    4>=1  4--
    {
        for(j=1;j<=i;j++)
        //      1<=4    1++
        {
            printf("*\t");
        }
        printf("\n");
    }

}
int main()
{
    int iValue1=0;
    int iValue2=0;

    printf("Enter the number of rows :\n");
    scanf("%d",&iValue1);

    printf("Enter the number of columns :\n");
    scanf("%d",&iValue2);

    Display(iValue1,iValue2);


    return 0;
}