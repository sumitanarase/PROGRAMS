// Input :  Row 4   Columns     4
/*
$   2   3   4
1   $   3   4
1   2   $   4
1   2   3   $
*/
// more optimization that menas we have to take only same value for columns and rows 

#include<stdio.h>

void Display(int iRow ,int iCol)
{
    int i = 0;
    int j =0;

    if(iRow != iCol)
    {
        printf("Invalid inputs please set equal values for Row and column....!\n");
        return ;
    }

    for(i =1 ;i<=iRow ;i++)
    {
        for(j =1;j<=iCol ;j++)
        {
            if(i == j)
            {
                printf("$\t");
            }
            else
            {
                printf("%d\t",j);
            }
        }
        printf("\n");

    }
}

int main()
{
    int iValue1 =0, iValue2 = 0;

    printf("Enter number of rows :\n");
    scanf("%d",&iValue1);

    printf("Enter number of columns :\n");
    scanf("%d",&iValue2);

    Display(iValue1,iValue2);

    return 0;
}