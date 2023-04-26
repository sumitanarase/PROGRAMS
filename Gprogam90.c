// Input :  Row 4   Columns     4
/*
$   *   *   *
*   $   *   *
*   *   $   *
*   *   *   $
*/

#include<stdio.h>

void Display(int iRow ,int iCol)
{
    int i =0;
    int j =0;

    for(i=1;i<=iRow ;i++)
    {
        for(j = 1 ;j<=iCol ;j++)
        {
            if(i==j)
            {
                printf("$\t");
            }
            else
            {
                printf("*\t");
            }
        }
        printf("\n");
    }
}
int main()
{
    int iValue =0;
    int iValue2 =0;

    printf("Enter the Number Rows :\n");
    scanf("%d",&iValue);

    printf("Enter the Number of Columns :\n");
    scanf("%d",&iValue2);

    Display(iValue,iValue2);

    return 0;
}