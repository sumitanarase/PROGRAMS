// Input :  Row 4   Columns    4
/*

A   B   C   D
A   B   C   D
A   B   C   D
A   B   C   D

*/
#include<stdio.h>

void Display(int iRow,int iCol)
{
    int i=0,j=0;
    char c = '\0';

    for(i=1;i<=iRow;i++)
    {
        for(j=1,c ='A';j<=iCol;j++,c++)
        {
            printf("%c\t",c);
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